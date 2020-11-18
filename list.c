#include"list.h"

void initList(Node *list) {
	Node *head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	return;
}
int Size(Node *list) {
	Node *p = list->next;
	int k = 0;
	while (p) {
		k++;
		p = p->next;
	}
	return k;
}


void Insert(Node *list, int k, DataType x) {
	if (k<1) exit (1);
	Node *p = list;
	int i = 0;
	while (p && i<k-1) {
		p = p->next;
		i++;
	}
	if (!p) exit(1);
	Node *s = (Node*)malloc(sizeof(Node));
	s->data = x;
	s->next = p->next;
	p->next = s;
}


void Delete(Node *list, int k) {
	if (k<1) exit(1);
	Node *p = list;
	int i = 0;
	while (p->next && i<k-1) {
		p = p->next;
		i++;
	}
	if (p->next==NULL) exit(1);
	Node *q = p->next;
	p->next = q->next;
	free(q);
}


int Emmpty(Node *list) {
	return list->next == NULL;
}

DataType GetData(Node *list, int k) {
	if (k<1) exit(1);
	Node *p = list;
	int i = 0;
	while (p && i<k) {
		p = p->next;
		i++;
	}
	if (!p) exit(1);
	return p->data;
}
Node* Find(Node *list, DataType x) {
	Node *p = list->next;
	while (p && p->data!=x) {
		p = p->next;
	}
	return p;
}

void Print(Node *list) {
	Node *p = list->next;
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
}


void ClearLinkList(Node *list) {
	Node *p, *q;
	while (p) {
		q = p;
		p = p->next;
		free(q);
	}
	list->next = NULL;
}
DataType CreateList(Node *list, int n, int m) {
	Node *p = (Node*)malloc(sizeof(Node));
	Node *s,*t;
	p->data = 1;
	p->next = NULL;
	Node *q = p;
	for(int i=2; i<=n; i++) {
		Node *r = (Node*)malloc(sizeof(Node));
		r->data = i;
		r->next = NULL;
		q->next = r;
		q = r;
	}
	q->next = p;
	s = p;
	while(s->next != s) {
		for(int i=1; i<m; i++) {
			t = s;
			s = s->next;
		}
		t->next = s->next;
		free(s);	
		s = t->next;
	}
	return s->data; 	

}

