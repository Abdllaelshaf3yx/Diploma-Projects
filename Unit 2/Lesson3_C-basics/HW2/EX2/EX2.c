#include <stdio.h>

void main()
{
	char x;
	printf("Enter an alphabet: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&x);
	switch(x)
	{
	case 'A':
	case 'a':
	case 'E':
	case 'e':
	case 'I':
	case 'i':
	case 'O':
	case 'o':
	case 'U':
	case 'u':
		printf("%c Is vowel", x);
		break;
	default:
		printf("%c Is consonant",x);
	}

}
