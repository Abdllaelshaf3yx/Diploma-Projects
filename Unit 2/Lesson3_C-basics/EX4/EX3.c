#include <stdio.h>

void main()
{
	float x,y;
	printf("Enter two Floats: ");
	fflush(stdout);fflush(stdin);
	scanf("%f%f",&x,&y);
	printf("Product = %f",x*y);
}
