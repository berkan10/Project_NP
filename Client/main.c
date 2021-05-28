// Hello World client

#include <zmq.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

int main (void)
{



void *context = zmq_ctx_new ();
void *push = zmq_socket (context, ZMQ_PUSH);
void *subs = zmq_socket (context, ZMQ_SUB);



int rp = zmq_connect (push, "tcp://benternet.pxl-ea-ict.be:24041");
int rs = zmq_connect (subs, "tcp://benternet.pxl-ea-ict.be:24042");
sleep(1);

if (rp != 0 && rs != 0)
{
    printf("ERROR: ZeroMQ error occurred during zmq_ctx_new(): %s\n", zmq_strerror(errno));

    return EXIT_FAILURE;
} else{printf(" Connected succesfully\n");}


char pushtask[]     = "FIFA!<task<Berkan>"; //Is the same as the subbed TASK
char subanswer[]    = "FIFA!<answer>";    //Is the same as the pushed ANSWER
char pushanswer[]   = "FIFA?<answer>";    //Is the same as the subbed ANSWER
char subtask[]      = "FIFA!<task<Berkan>"; //Is the same as the pushed TASK
char subanswerpackage[] = "FIFA!<answer<package>";
//char pushpackage[]  = ""

char buffer[256]="";
char buffer2[256]= "";
char buffer3[500]= "";
char buffer4[256]= "";
char buffer5[256]= "";

char ask[500]="";
char ask1[500]="";
char ask2[500]="";
char ask3[500]="";
char ask4[500]="";



zmq_setsockopt(subs, ZMQ_SUBSCRIBE, subtask, strlen(subtask));
zmq_setsockopt(subs, ZMQ_SUBSCRIBE, subanswer, strlen(subanswer));
zmq_setsockopt(subs, ZMQ_SUBSCRIBE, subanswerpackage, strlen(subanswerpackage));

// receive welcome message

zmq_recv(subs,buffer,255,0);
printf("%s", buffer);


// reply to message go

scanf("%s",ask);
strcat(pushanswer,ask);
zmq_send(push, pushanswer, 15, 0);

// receive input options

zmq_recv(subs,&buffer2,255,0);
printf("%s", buffer2);

restartgame:
// reply pack number #1

scanf("%s", ask1);
strcat(pushtask,ask1);
zmq_send(push,pushtask,20,0);

zmq_setsockopt(subs, ZMQ_UNSUBSCRIBE, subtask, strlen(subtask));
zmq_setsockopt(subs, ZMQ_UNSUBSCRIBE, subanswer, strlen(subanswer));

//receive pack results

int result = zmq_recv(subs,&buffer3,400,0);
//printf("%i", result);
printf("received : %s\n", buffer3);


// reply pack numer #2
scanf("%s", ask2);
strncpy(buffer4, "FIFA!<task<Berkan>" ,22);
strcat(buffer4,ask2);
zmq_send(push,buffer4,20,0);


//receive pack results
zmq_recv(subs,&buffer4,400,0);
printf("received : %s\n", buffer4);

// reply pack number #3

scanf("%s", ask3);
strncpy(buffer5, "FIFA!<task<Berkan>" ,22);
strcat(buffer5,ask3);
zmq_send(push,buffer5,20,0);

//receive pack results
zmq_recv(subs,&buffer5,400,0);
printf("received : %s", buffer5);

printf("\n Would u Like to play again? ( Y/N) .\n)") ;
 scanf("%s", ask4);
     if (strncmp("Y",ask4,1) == 0 )
  {   goto restartgame;     }
    else if (strncmp("N",ask4,1) == 0 )     {
    printf("Have a nice day \n");    }

//zmq_close (push);
//zmq_ctx_destroy (context);
}
