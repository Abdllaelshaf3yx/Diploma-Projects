#include <stdio.h>

void main()
{
	int i =0,counter=0;
	char str[50],ch;
	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(str);
	printf("Enter a character to find frequency: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&ch);
	for(i=0; str[i];i++)
	{
		if(str[i] == ch)
			counter++;
	}
	printf("Frequency of %c equal %d", ch, counter);

}
