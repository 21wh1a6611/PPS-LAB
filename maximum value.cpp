#include<stdio.h>
 int main()
{
	int a,b,c,max,min;
	printf("enter the values of a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?a:b;
	max=max>c?max:c;
	printf("%d\n",max);
	min=a<b?a:b;
	min=min<c?max:c;
	printf("%d\n",min);
}
