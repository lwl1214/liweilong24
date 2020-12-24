#ifndef HuffTree_h
#define HuffTree_h
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 30

typedef struct node
{
		int data;//结点数据
		struct node *lchild,*rchild;//哈夫曼树的左右孩子指针
		struct node *next;//哈夫曼树的结点同时又是单链表的结点，next为单链表的结点指针
}BSTree_Link;//二叉树及单链表结点类型
BSTree_Link *CreateLinkList(int);
void print(BSTree_Link *);
BSTree_Link *HuffTree(BSTree_Link *);
void Preorder(BSTree_Link *);
void Inorder(BSTree_Link *);
void HuffCode(BSTree_Link *);

#endif
