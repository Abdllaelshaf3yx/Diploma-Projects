#include <stdio.h>

void main()
{
	int i =0;
	char str[50];
	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(str);
	for(i=0; str[i];i++);
	printf("Length of String =%d", i);

}
