#include"stack.h"

int main(int argc, char **argv) {
	Stack *stack = (Stack*)malloc(sizeof(Stack));
	initStack(stack);
	push(stack, 80);
	push(stack, 90);
	push(stack, 100);
	dispStack(stack);
	Node *tmp = GetTop(stack);
	printf("getTop result; %d\n", tmp->data);
	pop(stack);
	dispStack(stack);
	printf("the stack lenght; %d\n",getLenght(stack));
	printf("请输入算式：\n");
	double a = operate();
	printf("结果是：%.2f\n", a);	
}
