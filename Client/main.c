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



zmq_connect (push, "tcp://benternet.pxl-ea-ict.be:24041");
zmq_connect (subs, "tcp://benternet.pxl-ea-ict.be:24042");


char pushtask[]     = "FIFA!<task<Berkan>"; //Is the same as the subbed TASK
char subanswer[]    = "FIFA!<answer>";    //Is the same as the pushed ANSWER
char pushanswer[]   = "FIFA?<answer>";    //Is the same as the subbed ANSWER
char subtask[]      = "FIFA!<task<Berkan>"; //Is the same as the pushed TASK
char subanswerpackage[] = "FIFA!<answer<package>";
//char pushpackage[]  = ""

char buffer[256];
char buffer2[256];
char buffer3[256];
char buffer4[256];

char ask[500]="";
char ask1[500]="";
char ask2[500]="";



zmq_setsockopt(subs, ZMQ_SUBSCRIBE, subtask, strlen(subtask));
zmq_setsockopt(subs, ZMQ_SUBSCRIBE, subanswer, strlen(subanswer));
zmq_setsockopt(subs, ZMQ_SUBSCRIBE, subanswerpackage, strlen(subanswerpackage));

zmq_setsockopt(subs, ZMQ_SUBSCRIBE, subanswer, strlen(subanswer));
zmq_setsockopt(subs, ZMQ_SUBSCRIBE, subanswer, strlen(subanswer));



zmq_recv(subs,buffer,255,0);
printf("%s", buffer);




// reply to message go

scanf("%s",ask);
strcat(pushanswer,ask);
zmq_send(push, pushanswer, 15, 0);

// receive welcome message

zmq_recv(subs,buffer2,255,0);
printf("%s", buffer2);

// reply pack number

scanf("%s", ask1);
strcat(pushtask,ask1);
zmq_send(push,pushtask,20,0);


//receive pack results

zmq_recv(subs,buffer3,25,0);
printf("%s", buffer3);


scanf("%s", ask1);
strncpy(buffer4, "FIFA!<task<Berkan>" ,22);
strcat(buffer4,ask1);
zmq_send(push,buffer4,20,0);
printf("%s", buffer4 );





zmq_close (push);
zmq_ctx_destroy (context);
}
