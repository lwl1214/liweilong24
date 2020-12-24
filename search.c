#include"search.h"
void SelSort(int a[], int aSize) {
	int k, m;
	for(int i = 0; i < aSize-1; i++) {
		m = a[i];
		k = i;
		for(int j = i+1; j < aSize; j++) 
			if(a[j] < m) {
				m = a[j];
				k = j;
			}
		a[k] = a[i];
		a[i] = m;
	}
}
int BinarySearch(int a[],int n,int x)//折半查找
{
		int low=0,high=n-1,mid;
		while(low<=high)
		{
				mid=(low+high)/2;
				if(a[mid]==x)
						return mid;
				else
						if(a[mid]>x)
								high=mid-1;
						else
								low=mid+1;
		}
		return -1;
} 
int BSearch(int a[],int low,int high,int x){
		int mid;
		if(low>high){
				return -1;
		}else{
				mid = (low+high)/2;
				if(a[mid]==x){
						return mid;
				}else if(a[mid]<x){
						return BSearch(a,mid+1,high,x);
				}else{
						return BSearch(a,low,mid-1,x);
				}
		}

}
int InsertBST(BSTNode *p, int k)
{
		if(p==NULL)
		{
				p=(BSTNode*)malloc(sizeof(BSTNode));
				p->key=k;
				p->lchild=NULL;
				p->rchild=NULL;
				return 1;
		}
		else if(k==p->key)
		{
				return 0;
		}
		else if(k<p->key)
		{
				return InsertBST(p->rchild,k);
		}
		else
		{
				return InsertBST(p->rchild,k);
		}
}

BSTNode *CreateBST(int a[],int n)
{
		BSTNode *bt=NULL;
		int i=0;
		while(i<n)
				if(InsertBST(bt,a[i])==1)
				{
						i++;
				}
		return bt;
}
void SearchBST_NoRec(BSTNode *bt,int k,int path[],int i)
{
		int j;
		if(bt==NULL)
		{
				return;
		}
		else if(k==bt->key)
		{
				path[i]=bt->key;

				for(j=0;j<=i;j++)
						printf("%3d",path[j]);
				printf("\n");
		}
		else
		{
				path[i]=bt->key;
				if(k<bt->key)
						SearchBST_NoRec(bt->lchild,k,path,i+1);
				else
						SearchBST_NoRec(bt->rchild,k,path,i+1);
		}
}
int Init(HashTable *H)
{
		H->count = 0;
		H->elem = (int *)malloc(sizeof(int));
		if (H->elem == NULL)
		{
				printf("动态内存分配失败！");
				exit(-1);
		}
		for (int i = 0;i < HASHSIZE;i++)
		{
				H->elem[i] = NULLKEY;
		}
		return 1;
}
int Hash(int k)
{		//除留余数法
		return k % HASHSIZE;
}
void Insert(HashTable *H, int k)
{
		int addr = Hash(k);
		while (H->elem[addr] != NULLKEY)
		{
				addr = (addr + 1) % HASHSIZE;
		}
		H->elem[addr] = k;
}
int Search(HashTable *H, int k)
{
		int addr = Hash(k);
		while (H->elem[addr] != k)
		{
				addr = (addr + 1) % HASHSIZE;
				if (H->elem[addr] == NULLKEY || addr == Hash(k))
				{
						return -1;
				}
		}
		return addr;
}
void Result(HashTable *H)
{
		for (int i = 0;i < HASHSIZE;i++)
		{
				printf("%d ", H->elem[i]);
		}
}
