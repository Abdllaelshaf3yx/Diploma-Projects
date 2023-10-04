#include <stdio.h>

void main()
{
	int start ,end,temp;
	char str[50];
	printf("Enter a string: ");
	fflush(stdout);fflush(stdin);
	gets(str);
	start = 0;
	end = strlen(str)-1;
	while(start<=end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	printf("Reverse string : %s",str);

}
