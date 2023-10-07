#include "stdio.h"
#include "string.h"

void reverseSentence(char*str,int start,int end)
{
	char temp;
	temp = str[start];
	str[start] = str[end-start];
	str[end-start] = temp;
	if(start == end/2)
		return;
	reverseSentence(str,start+1,end);

}

void main()
{
	char str[50];
	printf("Enter a sentence: ");
	fflush(stdout);fflush(stdin);
	gets(str);
	int size=strlen(str)-1;
	reverseSentence(str,0,size);
	printf("\n%s",str);


}
