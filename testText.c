#include "text.h"
int main() {
		 char *str;
		     int m,n,a,b,*pt1,*pt2;
		int var1 = 1;
		int var2 = 2;
		int var3 = 3;
		printf("var1:%p, var2:%p, var3:%p\n", &var1, &var2, &var3);
		printf("var1:%d, var2:%d, var3:%d\n", var1, var2, var3); 
		operate(var1, var2, var3);
		printf("请输入两个数:\n");
		scanf("%d %d",&a,&b);
		pt1 = &a;
		pt2 = &b;
		if(a < b){
				swap(pt1,pt2);
		}
		printf("%d %d",*pt1,*pt2);
		printf("\n");

		printf("请输入你想申请的初始内存大小:");
		scanf("%d",&m);
		str = (char *)malloc(m);
		strcpy(str,"shujujiegou");
		printf("String = %s,Address = %p\n",str,&str);
		printf("请输入你想增加的内存大小:");
		scanf("%d",&n);
		str = (char *)realloc(str,m);
		strcat(str,".com");
		printf("String = %s,Address = %p\n",str,&str);
		free(str);
		printf("\n");
	return 0;

}
