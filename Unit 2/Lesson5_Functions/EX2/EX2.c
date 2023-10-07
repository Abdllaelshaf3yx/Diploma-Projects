#include "stdio.h"

int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

void main()
{
	int x;
	printf("Enter a positive integer: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);
	printf("factorial of %d = %d",x,multiplyNumbers(x));

}
