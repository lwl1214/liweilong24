#ifndef queue_h
#define queue_h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MaxSize 100

typedef int DataType;
typedef struct node_{
	DataType data;
	struct node_*next;
	struct node_*prev;
} Node;
typedef struct queue_{
	Node *front;
	Node *rear;
} Queue;

void initQueue(Queue *);
int Empty(Queue *);
void push(Queue *, DataType);
void pop(Queue *);
DataType Front(Queue *);
DataType Back(Queue *);
int Size(Queue *);
void push_front(Queue *, DataType);
void push_back(Queue *, DataType);
void pop_front(Queue *);
void pop_back(Queue *);
void clear(Queue *);
void print(Queue *);

#endif
