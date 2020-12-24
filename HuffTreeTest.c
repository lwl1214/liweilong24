#include "HuffTree.h"
void main()
{
		BSTree_Link *root;
		int n;
		printf("Input number of keys\n");//输入叶子结点的个数
		scanf("%d",&n);
		printf("Input keys:\n");//输入n个叶子结点的权值
		root=CreateLinkList(n);//根据叶子结点的权值生成一个升序单链表
		printf("Output list:\n");//输出所生成的升序单链表
		print(root);
		root=HuffTree(root);//生成哈夫曼树
		printf("Inorder output HuffTree:\n");//中序遍历输出哈夫曼树各结点的值
		Inorder(root);
		printf("\n");
		printf("Preorder output HuffTree:\n");//先序遍历输出哈夫曼树各结点的值
		Preorder(root);
		printf("\n");
		printf("Output Code  of HuffTree:\n");//后序遍历哈夫曼树构造并输出哈夫曼编码
		HuffCode(root);
}
