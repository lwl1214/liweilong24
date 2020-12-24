#include "search.h"
int main()
{
		int a[] = {2, 7, 3, 8, 12, 5, 6, 4, 9, 13};
		int aSize = sizeof(a)/sizeof(int);
		SelSort(a, aSize);
		printf("排序后数据为：");
		for(int i=0; i<aSize; i++)
				printf("%d ", a[i]);
		printf("\n");
		printf("请输入你要查找的值:\n");
		int x;
		scanf("%d",&x); 
		int t = BinarySearch(a, aSize, x);
		if(t == -1)
				printf("没有你要找的数据：\n");
		else
				printf("你要找的数据在第%d的位置",t+1);
		printf("\n");
		BSTNode *bt;
		int k=4;
		bt=CreateBST(a,aSize);
		printf("这些数中有你要查找的元素%d",k);
		SearchBST_NoRec(bt,k,path,0);
		int i, j, addr;
		HashTable H;
		Init(&H);
		printf("\n");
		for (i = 0; i < aSize; i++)
		{
				Insert(&H, a[i]);
		}
		printf("待查找数据为：\n");
		Result(&H);
		printf("\n");
		printf("输入需要查找的元素：");
		scanf("%d", &j);
		addr = Search(&H, j);
		if (addr == -1)
				printf("元素不存在\n");
		else
				printf("%d元素在表中的位置是:%d\n", j, addr+1);

		return 0;
}
