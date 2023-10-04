#include <stdio.h>

void main()
{
	float arr[20],avg=0;
	int n,i;
	printf("Enter Number of data: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d. Enter Number: ",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%f",&arr[i]);
		avg+=arr[i];
	}
	printf("Average = %.2f",(avg/n));
}
