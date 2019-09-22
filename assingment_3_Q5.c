/*program which reads a,b and c let ax+by+c=0 be the equation of a line.prints its slope,program also prints wheather the line is vertical or not-vaibhav bhaskar,11902060,IT*/
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float m;
	printf("enter the values of a,b,c;\n");
	scanf("%f%f%f",&a,&b,&c);
	m=((-a)/b);
	if (b==0)
	{
		printf("line is vertical.\n");
	}
	else
	{
		printf("line is not vertical.\n");
	}
	printf("slope=%f",m);
}

