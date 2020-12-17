#include "text.h"
void operate(int var1, int var2, int var3) {
		int *ptr_var1 = &var1;
		int *ptr_var2 = &var2;
		int *ptr_var3 = &var3;
		int temp = *ptr_var1;
		*ptr_var1 = *ptr_var2;
		*ptr_var2 = *ptr_var3;
		*ptr_var3 = temp;
		printf("var1:%d, var2:%d, var3:%d\n", var1, var2, var3);
}
void swap(int *p1,int *p2){
				int *p;
				*p = (*p1);
				*p1 = (*p2);
				*p2 = (*p);
}
