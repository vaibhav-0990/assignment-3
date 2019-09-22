/*progran which reads a,b and cas sides of a triangle and prints whether angle A is 90 or not-vaibhav bhaskar,11912060,IT*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,A;
	printf("enter the sides of triangle:\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a*a)==((b*b)+(c*c)))
	{
		printf("Yes angle A is 90.deg");
		
	}
	else 
		printf("No angle A is not 90.deg");
}

