#ifndef list_h
#define list_h
#include <stdlib.h>
#include <stdio.h>

typedef int DataType;

typedef struct node_{
	DataType data;
	struct node_ *next;
} Node;

typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
} List;

void initList(Node *);
int Size(Node *);
void Insert(Node *, int, DataType);
void Delete(Node *, DataType);
int Empty(Node *);
DataType GetData(Node *, DataType);
Node *Find(Node *, DataType);
void Print(Node *);
void ClearList(Node *);
DataType CreateList(Node *, int, int);

#endif
