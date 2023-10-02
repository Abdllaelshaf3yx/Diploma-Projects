#include <stdio.h>

void main()
{
	int x,y,sum;
	printf("Enter value of x: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	printf("Enter value of y: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&y);
	sum = x + y;
	x= sum - x;
	y = sum-y;
	printf("After swapping, value of x = %d\nAfter swapping, value of y = %d",x,y);
}
