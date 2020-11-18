#include"list.h"

int main(int argc, char **argv) {
	Node *list = (Node*)malloc(sizeof(Node));
	Insert(list, 1, 10);
	Insert(list, 1, 20);
	Delete(list, 2);
	Insert(list, 1, 30);
	Insert(list, 1, 40);
	printf("链表的元素个数为： %d\n", Size(list));
	Print(list);
//	printf("%d %d %d\n", GetData(list, 1), GetData(list, 2), GetData(list, 3));
//	printf("链表的第1个元素为： %d\n", GetData(list, 1));
	printf("链表的第2个元素为： %d\n", GetData(list, 2));
//	printf("链表的第3个元素为： %d\n", GetData(list, 3));
	system("pause");

	printf("最后一个获胜者的编号是：%d\n", CreateList(list, 11, 3));
}	
