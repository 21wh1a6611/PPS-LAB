#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,r1,r2,QE,x;
	printf("enter the values");
	scanf("%d%d%d",&a,&b,&c);
	QE=a*x*x+b*x+c;
	d=b*b-4*a*c;
	r1=-b+sqrt(d/2*a);
	r2=-b-sqrt(d/2*a);
	printf("%d%d",r1,r2);
	if(d>0)
{
	printf("roots are real and distinct");
}
    else if (d<0)
     {
     	printf("roots are imaginary ");
	 }
	else if (d==0)
	 {
	 	printf("roots are equal");
	 }
	 
	
}
