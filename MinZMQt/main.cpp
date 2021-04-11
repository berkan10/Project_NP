
#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>
#include <QTimer>
#include <QDateTime>
#include <zmq.h>

#include "pakket.h"
#include "goudpack.h"
#include "zilverpack.h"
#include "bronspack.h"

#include <string>


using namespace std;



void * context; //Global context, because you only need one !




int main( int argc, char *argv[] )
{
    //QCoreApplication a(argc, argv);


    context = zmq_ctx_new(); // thread safe

    void * pusher = zmq_socket( context, ZMQ_PUSH );
    void * subs = zmq_socket( context, ZMQ_SUB );

    char s[] = "Welcome to FIFA\n Type 'Go' or 'go' to get further";


    zmq_connect(pusher,"tcp://benternet.pxl-ea-ict.be:24041");// zmq CONNECT SOCKET TO AN ENDPOINT AND THEN ACCEPT INCOMONG CONNECTIONS ON THAT ENDPOINT
    zmq_connect(subs, "tcp://benternet.pxl-ea-ict.be:24042" );

    char choice[100]="";
    string str1("Type 'Go' or 'go' to get further");
    string str2("Choose your package (press number) ");


    zmq_send( pusher, s, strlen(s), 0 );
    zmq_setsockopt( subs,ZMQ_SUBSCRIBE,"MK>GO>", 6);

    zmq_recv(subs,choice,strlen(choice),0);

    char str[50] ="";
//parsing van choice en het woord go

    if(strncmp(str,"go",2) ==0)
      zmq_send( pusher, str2.c_str(), str2.size(), 0 );
      zmq_setsockopt( subs,ZMQ_UNSUBSCRIBE,"MK>GO>", 6);


    goudpack g;
    zilverpack z;
    bronspack b;

    pakket *goudP = &g;
    pakket *zilverP = &z;
    pakket *bronsP = &b;

    cout << "FIFA Ultimate Team pack opening" << endl;


    if(strncmp("1",choice,1) == 0)
    {
        cout << "succes" << endl;
        goudP->samenstellen();
       // Saldo -= GoudPrijs;
       // cout << "nieuwe saldo is:"<<Saldo<<endl;
    }

    zmq_close( pusher );
    zmq_close( subs );
    zmq_ctx_shutdown( context ); //optional for cleaning lady order (get ready you l*zy f*ck)
    zmq_ctx_term( context ); //cleaning lady goes to work




}
















