#include <stdio.h>

void main()
{
	int a[10][10];
	int r,c,i,j;
	printf("Enter Row and columns of matrix: ");
	fflush(stdout);fflush(stdin);
	scanf("%d%d",&r,&c);
	printf("Enter Elements matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter Element a%d%d: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("Transposed matrix: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
