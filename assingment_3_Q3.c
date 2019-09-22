/*program which which reads two numbers and prints both of them.the bigger number is printed first-vaibhav bhaskar,11912060,IT*/
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter two numbers to compare:\n");
	scanf("%d%d",&num1,&num2);
	if (num1>num2)
	{
		printf("%d%d",num1,num2);
	}
	else 
		printf("%d%d",num2,num1);
}

