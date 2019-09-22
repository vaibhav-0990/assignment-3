/*program which reads three numbers and prints the biggest number-vaibhav bhaskar,11902060,IT*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers to compare:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("%d is largest.",a);
	}
	else if(b>c)
	{
		printf("%d is largest.",b);
	}
	else{
		printf("%d is largest.",c);
	}
}

















