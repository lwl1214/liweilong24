#include "list2.h"
int main(int argc, char **argv)
{
		List *list = (List *)malloc(sizeof(List));
		initList(list);
		addHead(list, 4);
		addHead(list, 6);
		addHead(list, 8);
		addHead(list, 10);
		dispList(list);
		printf("the list: %d\n", getLength(list));
		return 0;
}
