#include "stdio.h"

int isPrime(int num)
{
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}

void primeNumbersBetweenTwoIntervals(int x, int y)
{
	printf("Prime Numbers Between %d and %d: ",x,y);
	int i,flag;
	for(i=x; i<=y;i++)
	{
		flag = isPrime(i);
		if(flag==1)
			printf("%d ",i);
	}
}

void main()
{
	int x,y;
	printf("Enter Two Numbers (intervals): ");
	fflush(stdout);fflush(stdin);
	scanf("%d%d",&x,&y);
	primeNumbersBetweenTwoIntervals(x,y);

}
