#include "queue.h"
int main(int argc, char **argv)
{
		Queue *q = (Queue *)malloc(sizeof(Queue));
		initQueue(q);
		push(q, 10);
		push(q, 20);
		push(q, 30);
		push(q, 40);
		pop(q);
		printf("getTop result: %d\n", Front(q));
		printf("getRear result: %d\n", Back(q));
		printf("the list: %d\n",Size(q));
		push_back(q, 70);
		push_front(q, 50);
		push_back(q, 80);
		push_front(q, 60);
		pop_back(q);
		print(q);
}

