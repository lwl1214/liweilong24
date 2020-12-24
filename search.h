#ifndef search_h
#define search_h
#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
#define HASHSIZE 10
#define NULLKEY -32768 
typedef struct
{
			int* elem;
			int count;
}HashTable;
int path[100];
typedef struct node
{
		int key;
		struct node *lchild;
		struct node *rchild;
}BSTNode;
int Init(HashTable *);
int Hash(int);
void Insert(HashTable *, int);
int Search(HashTable *, int);
void Result(HashTable *);
int InsertBST(BSTNode *, int);
BSTNode *CreateBST(int a[], int);
void SearchBST_NoRec(BSTNode *, int, int path[], int);
void SelSort(int a[], int);
int BinarySearch(int a[], int, int);
int BSearch(int a[], int, int, int);
#endif
