#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	float a,b,c,det,r1,r2,r11,r22;
	printf("enter the values of a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	det=b*b-4*a*c;
	r1=(-b+sqrt(det))/(2*a);
	r2=(-b-sqrt(det))/(2*a);
	r11=(-b+sqrt(abs(det)))/(2*a);
	r22=(-b-sqrt(abs(det)))/(2*a);
	if(det>0)
	{
		printf("roots are distinct and real and are:%f,%f",r1,r2);
	}
	else if(det=0)
	{
		printf("roots are equal and are:%f",r1);
	}
	else
	{

		printf("roots are imaginary and are:%f,%f",r11,r22);
	}
}

