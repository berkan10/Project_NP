#include <sstream>
#include <iostream>
#include <nzmqt/nzmqt.hpp>
#include <QCoreApplication>
#include <QTimer>
#include <QDateTime>
#include <zmq.h>
#include <time.h>
#include <locale>
#include <string>


#include "pakket.h"
#include "goudpack.h"
#include "zilverpack.h"
#include "bronspack.h"




using namespace std;



void * context; //Global context, because you only need one !


int main( int argc, char *argv[] )
{
    //QCoreApplication a(argc, argv);

    goudpack g;
    zilverpack z;
    bronspack b;

    pakket *goudP = nullptr;
    pakket *zilverP = nullptr;
    pakket *bronsP = nullptr;

    goudP = &g;
    zilverP = &z;
    bronsP = &b;

    context = zmq_ctx_new(); // thread safe
    void * pusher = zmq_socket( context, ZMQ_PUSH );
    void * subs = zmq_socket( context, ZMQ_SUB );

    // variable
    char choise[100]="";
    char choise_package[100] = "";
    char s[] = "FIFA!>Berkan>Welcome to FIFA\n Type 'Go' or 'go' to get further";
    string str("Choose your package to get your cards (press number) ");
    char buffer[256];
    char buffer2[256];
    char buffer3[256];
    char buffer4[512];
    int gamescore = 0;
    char Response;

    zmq_connect(pusher,"tcp://benternet.pxl-ea-ict.be:24041");// zmq CONNECT SOCKET TO AN ENDPOINT AND THEN ACCEPT INCOMONG CONNECTIONS ON THAT ENDPOINT
    zmq_connect(subs, "tcp://benternet.pxl-ea-ict.be:24042" );

     char pushtask[]     = "FIFA!<task<Berkan>"; //Is the same as the subbed TASK
     char subanswer[]    = "FIFA?<answer>";    //Is the same as the pushed ANSWER
     char pushanswer[]   = "FIFA!<answer>";    //Is the same as the subbed ANSWER
     char pushanswerpackage[] = "FIFA!<answer<package>";

    zmq_setsockopt(subs, ZMQ_SUBSCRIBE, subanswer, strlen(subanswer));


    printf("SERVICE STARTED SUCESSFULLY\n\n");
    srand(time(NULL));


    // message to client

    strncpy(buffer, pushtask, 19);
    strncat(buffer, "Welcome to FIFA\n Type 'Go' or 'go' to get further\n", 71);
    zmq_send(pusher,buffer, strlen(buffer), 0);




    // received message

    zmq_recv(subs,buffer2,255,0);




    //parsing van choice en het woord go
        char* sep = strtok(buffer2,"<");
        char* sep1 = strtok(NULL,">");
        char* sep2 = strtok(NULL,">");

 //  printf("%s\n",sep2);
 //  printf("%s\n",sep1);
 //  printf("%s\n",sep);

 //   printf("%c",choise);



    //parsing van choice en het woord go
    if(strncmp(sep2,"go",2) ==0){
        strncpy(buffer3, pushanswer, 100);
        strncat(buffer3, "Welcome to FIFA Ultimate Team pack opening let's gooooooo\nChoose your package to get your cards (press number)\n1 GOLD PACK \n2 SILVER PACK \n3 BRONZE PACK \n", 256);
        zmq_send( pusher, buffer3, strlen(buffer3),0 );
    }

    zmq_setsockopt(subs, ZMQ_UNSUBSCRIBE, subanswer, strlen(subanswer));
    zmq_setsockopt(subs, ZMQ_SUBSCRIBE, pushtask, strlen(pushtask));


    while (1)
    {
        zmq_recv(subs,choise_package,99,0);

        //parsing van gekozen pakket

            char* parsing = strtok(choise_package,">");
            char* parsing1 = strtok(NULL,"<");
            char* parsing2 = strtok(NULL,"<");



          // printf("%s", parsing2);
             printf("%s\n",parsing1);
           //  printf("%s\n",parsing);




                 if(strncmp("1",parsing1,1) == 0)
                 {
                  //   std::stringstream playerGold;
                     string mes = "\nSpeler:      =>";
                     mes.append(g.getNaamspeler());
                     mes.append("\n country       =>");
                     mes.append(g.getLandSpeler());
                     mes.append("\n rating        =>");
                     mes.append(g.getRatingSpeler());
                     mes.append("\n leeftijd      =>");
                     mes.append(g.getLeeftijdSpeler());
                     mes.append("\n\n Stadium       =>");
                     mes.append(g.getNaamStadium());
                     mes.append("\n Capaciteit    =>");
                     mes.append(g.getCapaciteitStadium());
                     mes.append("\n Land          =>");
                     mes.append(g.getLandStadium());
                     mes.append("\n Opening       =>");
                     mes.append(g.getOpeningStadium());
                     mes.append("\n\n Coach         =>");
                     mes.append(g.getNaamCoach());
                     mes.append("\n Rating        =>");
                     mes.append(g.getRatingCoach());
                     mes.append("\n Nationaliteit =>");
                     mes.append(g.getLandCoach());
                     mes.append("\n Leeftijd      =>");
                     mes.append(g.getLeeftijdCoach());



                     strncpy(buffer4, pushanswerpackage, 22);
                     strncat(buffer4, "mes.c_str()" ,25);
                     zmq_send(pusher,buffer4, strlen(buffer4), 0);



                 }

                else if(strncmp("2",parsing1,1) == 0)
                 {
                   //  std::stringstream playerBrons;
                    // playerBrons << b.getNaamspeler();

                    // std::string player_brons = playerBrons.str();

                     string mes1 = "\nSpeler:       => ";
                     mes1.append(z.getNaamspeler());
                     mes1.append("\n country        =>");
                     mes1.append(z.getLandSpeler());
                     mes1.append("\n rating         =>");
                     mes1.append(z.getRatingSpeler());
                     mes1.append("\n leeftijd       =>");
                     mes1.append(z.getLeeftijdSpeler());
                     mes1.append("\n\n Coach        =>");
                     mes1.append(z.getNaamCoach());
                     mes1.append("\n Rating         =>");
                     mes1.append(z.getRatingCoach());
                     mes1.append("\n Nationaliteit  =>");
                     mes1.append(z.getLandCoach());
                     mes1.append("\n Leeftijd       =>");
                     mes1.append(z.getLeeftijdCoach());
                     zmq_send( pusher,mes1.c_str(), mes1.size(),0);

                 }
                 else if(strncmp("3",parsing1,1) == 0){

                     string mes2 = "Speler:     =>";
                     mes2.append(b.getNaamspeler());
                     mes2.append("\n country    =>");
                     mes2.append(b.getLandSpeler());
                     mes2.append("\n rating     =>");
                     mes2.append(b.getRatingSpeler());
                     mes2.append("\n leeftijd   =>");
                     mes2.append(b.getLeeftijdSpeler());

                     zmq_send( pusher,mes2.c_str(), mes2.size(),0);
                 }
                 else if(strncmp("End",parsing1,1) == 0){
                    // break;
                 }
    }












    //zmq_close( pusher );
  //  zmq_close( subs );
    //zmq_ctx_shutdown( context ); //optional for cleaning lady order (get ready you l*zy f*ck)
  //  zmq_ctx_term( context ); //cleaning lady goes to work




}
















