#include <stdio.h>

void main()
{
	int a[10],n,element,position,i;
	printf("Enter number of elements: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array Before Adding an element: \n");
	for(i = 0; i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter Element you want to add: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&element);
	printf("\nEnter position of Element you want to add: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&position);
	//	Shifting elements
	for(i=n-1;i>=position-1;i--)
	{
		a[i+1] = a[i];
	}
	a[position-1] = element;
	n++;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

}
