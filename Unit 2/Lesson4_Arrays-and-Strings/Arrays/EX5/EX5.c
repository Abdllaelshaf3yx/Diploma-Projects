#include <stdio.h>

void main()
{
	int a[10],n,i,element;
	char flag = 0;
	printf("Enter Number of Elements: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element that you want to find : ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&element);
	for(i=0;i<n&&flag==0;i++)
	{
		if(a[i] == element)
		{
			flag=1;
		}
	}
	if(flag == 1)
	{
		printf("Number Found at position %d", i);
	}
	else
		printf("number doesn't exist");


}
