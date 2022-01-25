#include<stdio.h>
#include<math.h>
int main()
{
float p,r,t,n,SI,CI;
scanf("%f%f%f%f",&p,&r,&t,&n);
SI=(p*r*t)/100;
printf("simple interest is %f\n",SI);
CI=p*pow(1+r/n,t)-p;
printf("compound interest is %f\n",CI);	
}
