#include"queue.h"

void initQueue(Queue *q) {
		Node *front = NULL;
		Node *rear = NULL;
		return;
}

int Empty(Queue *q) {

		return q->front == q->rear;

}

void push(Queue *q, DataType data) {
		Node *p = (Node*)malloc(sizeof(Node));
		p->data = data;
		p->next = NULL;
		if(q->front ==NULL) {
				q->front = p;
		}else{
				q->rear->next = p;
		}
		q->rear = p;
		return;
}

void pop(Queue *q) {
		if(Empty(q)) exit(1);
		q->front = q->front->next;
		return;
}
DataType Front(Queue *q) {

		return q->front->data;
}

DataType Back(Queue *q) {

		return q->rear->data;
}

int Size(Queue *q) {

		Node *p =(Node*)malloc(sizeof(Node));
		p = q->front;
		int k = 0;
		while(p) {
				k++;
				p = p->next;
		}
		return k;
}

void push_front(Queue *q, DataType x) {
		Node *s = (Node*)malloc(sizeof(Node));
		s->data = x;
		s->next = NULL;
		if(q->front == NULL) {
				q->rear =s;
		}else{
				s->next = q->front;
		}
		q->front = s;
		return;
}

void push_back(Queue *q, DataType x) {	
		Node *s = (Node*)malloc(sizeof(Node));
		s->data = x;
		s->next = NULL;
		if(q->front == NULL) {
				q->front =s;
		}else{
				q->rear->next = s;
		}
		q->rear = s;
		return;
}
void pop_front(Queue *q) {
		if(Empty(q)) exit(1);
		q->front = q->front->next;
		return;
}
void pop_back(Queue *q) {
		if(Empty(q)) exit(1);
		q->rear = q->rear->prev;
}
void clear(Queue *q) {
		Node *p = (Node*)malloc(sizeof(Node));
		Node *t = (Node*)malloc(sizeof(Node));
		p = q->front;
		while(p != NULL) {
				t = p;
				p = p->next;
				free(t);

		}
		q->rear = q->front = NULL;
}

void print(Queue *q) {
		Node *p = (Node*)malloc(sizeof(Node));
		p = q->front;
		while(p != NULL) {
				printf("%d ", p->data);
				p = p->next;
		}
		printf("\n");
}

