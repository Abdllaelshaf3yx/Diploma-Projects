#include "stdio.h"
#include "string.h"

int power(int x, int y)
{
	int pow=1;
	pow*=x;
	if(y > 1)
	{
		pow *= power(x,--y);
	}
	return pow;
}

void main()
{
	int x,y;
	printf("Enter base Number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	printf("Enter Power Number(positive int): ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&y);
	printf("%d ^ %d = %d",x,y,power(x,y));


}
