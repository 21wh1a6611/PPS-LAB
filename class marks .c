#include<stdio.h>
int main()
{
	int phy,chem,maths,avg,total;
	printf("enter 3 subjects marks");
	scanf("%d%d%d",&phy,&chem,&maths);
	total=phy+chem+maths;
	avg=total/3;
	if (avg>=90)
	{
		printf("distinction");
	}
	else if (avg<=80&&avg>=70)
	{
		printf("grade A");
	}
	else if (avg<=70&&avg>=50)
	{
		printf("grade B");
	}
	else if (avg<=50&&avg>=35)
	{
		printf("grade C");
	}
	else 
	{
		printf("fail");
	}
}
