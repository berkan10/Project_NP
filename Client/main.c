// Hello World client

#include <zmq.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int main (void)
{
printf ("Connecting to the FIFA ...\n");

void *context = zmq_ctx_new ();
void *push = zmq_socket (context, ZMQ_PUSH);
void *subs = zmq_socket (context, ZMQ_SUB);

zmq_connect (push, "tcp://benternet.pxl-ea-ict.be:24041");
zmq_connect (subs, "tcp://benternet.pxl-ea-ict.be:24042");


char ask[500]="";

scanf("%s",ask);
char str[100] = "MK>GO>";
strcat(str,ask);
zmq_send(push, str, 8, 0);



zmq_close (push);
zmq_ctx_destroy (context);
}
