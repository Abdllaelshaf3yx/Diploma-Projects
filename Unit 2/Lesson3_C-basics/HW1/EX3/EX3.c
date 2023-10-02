#include <stdio.h>

void main()
{
	int x,y;
	printf("Enter two integers: ");
	fflush(stdout);fflush(stdin);
	scanf("%d%d",&x,&y);
	printf("sum = %d",x+y);
}
