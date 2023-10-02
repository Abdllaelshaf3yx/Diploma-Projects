#include <stdio.h>

void main()
{
	int x,sum;
	printf("Enter an integer: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	sum = (x*(x+1))/2;
	printf("sum = %d", sum);
}
