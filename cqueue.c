#include "main.h"
#include <stdio.h>
int main() {
  struct CQueue cq;
  init(&cq, 3);
  enqueue(&cq, 2);
  enqueue(&cq, 2);
  enqueue(&cq, 2);
  enqueue(&cq, 2);
  display(&cq);
}
