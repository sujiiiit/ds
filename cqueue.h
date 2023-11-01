#include <stdio.h>
#define MAX 50

struct CQueue {
  int capacity;
  int front;
  int rear;
  int arr[MAX];
};

void init(struct CQueue *cq, int capacity) {
  cq->front = -1;
  cq->rear = -1;
  cq->capacity = capacity;
  printf("Queue Initialized\n");
}

int isEmpty(struct CQueue *cq) {
  if (cq->front == -1 && cq->rear == -1) {
    return 1;
  } else {
    return 0;
  }
}

int isFull(struct CQueue *cq) {
  if (cq->front == (cq->rear + 1) % cq->capacity) {
    return 1;
  } else {
    return 0;
  }
}

int enqueue(struct CQueue *cq, int ele) {
  if (isFull(cq)) {
    printf("Queue is full\n");
    return -1;
  } else {
    cq->rear = (cq->rear + 1) % cq->capacity;
    if (cq->front == -1) {
      cq->front = 0;
    }
    cq->arr[cq->rear] = ele;
    printf("Element Inserted : %d\n",ele);
  }
}

int dequeue(struct CQueue *cq) {
  if (isEmpty(cq)) {
    printf("Queue is Empty\n");
    return -1;
  } else {
    int ele = cq->arr[cq->front];
    if (cq->front == cq->rear) {
      cq->front = cq->rear = -1;
    } else {
      cq->front = (cq->front + 1) % cq->capacity;
    }
    printf("Element removed : %d\n", ele);
  }
}

int display(struct CQueue *cq) {
  if (isEmpty(cq)) {
    printf("Queue is Empty\n");
    return -1;
  } else {
    int i = cq->front;
    while (i != (cq->rear + 1) % cq->capacity) {
      printf("%d", cq->arr[i]);
      i = (i + 1) % cq->capacity;
    }
    printf("\n");
  }
}
