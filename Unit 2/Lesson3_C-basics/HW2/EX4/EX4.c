#include <stdio.h>

void main()
{
	float x;
	printf("Enter number: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&x);
	if(x > 0)
		printf("%f is positive",x);
	else if(x<0)
		printf("%f is negative",x);
	else
		printf("you entered zero");


}
