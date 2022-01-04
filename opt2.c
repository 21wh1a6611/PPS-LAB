#include<stdio.h>
int main()
{ 
	int a,b;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	printf("the logical operators result is %d%d%d",a&&b,a||b,!(a==b));
	printf("the increment operators result is %d%d%d%d",a++,++a,b++,++b);
	printf("the decrement operators result is %d%d%d%d",a--,--a,b--,--b);
}

