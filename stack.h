#ifndef stack_h
#define stack_h
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef int DataType;

typedef struct node_{
	DataType data;
	struct node_ *next;
} Node;

typedef struct stack_{
	Node *head;
	Node *tail;
	Node *current;
} Stack;

void initStack(Stack *);
void push(Stack *, DataType);
void pop(Stack *);
Node *GetTop(Stack *);
int getLenght(Stack *);
void dispStack(Stack *);
char *gets(char *);
int priority(char);
double compute(double, double, char);
int operate();

#endif

