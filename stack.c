#include"stack.h"

void initStack(Stack *stack) {
	stack->head = NULL;
	stack->tail = NULL;
	stack->current = NULL;

	return;
}

void push(Stack *stack, DataType x) {
	Node *t = (Node *)malloc(sizeof(Node));
	t->data = x;
	t->next = NULL;
	if(stack->head == NULL) {
		stack->tail = t;
	}else{
		t->next = stack->head;
	}
	stack->head = t;
	
	return;
}

void pop(Stack *stack) {
	stack->head = stack->head->next;

	return;
}

Node *GetTop(Stack *stack) {
	Node *t = (Node*)malloc(sizeof(Node));
	t = stack->head;
	return t;
}

int getLenght(Stack *stack) {
	Node *t = (Node*)malloc(sizeof(Node));
	t = stack->head;
	int i = 0;
	while(t != NULL) {
		t = t->next;
		i++;
	}
	return i;

}

void dispStack(Stack *stack) {
	Node *t = (Node*)malloc(sizeof(Node));
	t = stack->head;
	int i = 0;
	while(t != NULL) {
		printf("the %dth node: %d\n", i+1, t->data);
		t = t->next;
		i++;
	}
	printf("display finished\n");
	return;
}

int priority(char x) {
	switch(x) {
		case '+':
		case '-':
		case '=': return 1;
		case '*':
		case '/': return 2;
		case '(': return 3;
	}
}

double compute(double x, double y, char op) {
	switch(op) {
		case '+': return x + y;
		case '-': return x - y;
		case '*': return x * y;
		case '/': return x / y;
	}
}

int operate() {
	char s2[500];
	char t[1001];
	char op;
	double s1[500];
	int top1 = -1, top2 = -1;
	double x, y;
	gets(t);
	for(int i=0; i<strlen(t); i++) {
		if(t[i]>='0' && t[i]<='9') {
			double value = 0;
			while(t[i]>='0' && t[i]<='9') {
				value = 10*value + t[i] - '0';
				i++;
			}
			if(t[i] == '.') {
				int r = 10;
				i++;
				while(t[i]>='0' && t[i]<='9') {
					value = value + (t[i]-'0')/r;
					r = 10 * r;
					i++;
				}
			}
			s1[++top1] = value;
		}
		if(t[i] == ')') {
			while(s2[top2] != '(') {
				y = s1[top1--];
				x = s1[top1--];
				op = s2[top2--];
				s1[++top1] = compute(x, y, op);
			}
			top2--;
		}
		else{ 
			while(top2!=-1 && s2[top2]!='(' && priority(t[i])<=priority(s2[top2])) {
			
				y = s1[top1--];
				x = s1[top1--];
				op = s2[top2--];
				s1[++top1] = compute(x, y, op);
			}
			s2[++top2] = t[i];
		}	
	}
	return s1[top1];	
}
