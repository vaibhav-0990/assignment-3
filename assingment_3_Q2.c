/*program which reads four numbers and prints the biggest number-vaibhav bhaskar,11912060,IT*/
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter four numbers to compare:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&& a>c && a>d)
	{
		printf("%d is the biggest.",a);
	}
	else if(b>a && b>c && b>d)
	{
		printf("%d is the biggest.",b);
	}
	else if(c>a && c>b && c>d)
	{
		printf("%d is the largest.",c);
	}
	else 
		printf("%d is biggest.",d);
}

