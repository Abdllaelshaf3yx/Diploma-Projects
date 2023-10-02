#include <stdio.h>

void main()
{
	char x;
	printf("Enter a character: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&x);
	if(x >= 'A' && x <= 'z')
		printf("%c is an alphabet",x);
	else
		printf("%c is not an alphabet",x);
}
