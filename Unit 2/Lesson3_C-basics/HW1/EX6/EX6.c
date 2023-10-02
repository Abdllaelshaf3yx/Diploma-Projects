#include <stdio.h>

void main()
{
	float x,y,temp;
	printf("Enter value of x: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&x);
	printf("Enter value of y: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&y);
	temp = x;
	x=y;
	y =temp;
	printf("After swapping, value of x = %f\nAfter swapping, value of y = %f",x,y);
}
