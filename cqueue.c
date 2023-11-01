#include "cqueue.h"
#include <stdio.h>
int main()
{
  struct CQueue cq;
  init(&cq, 3);
  enqueue(&cq, 2);
  enqueue(&cq, 2);
  enqueue(&cq, 2);
  enqueue(&cq, 2);
  dequeue(&cq);
  //display(&cq);
  enqueue(&cq, 5);
  display(&cq);
}
