#include <stdio.h>

void main()
{
	float a[2][2],b[2][2];
	int r,c;
	printf("Enter the elements of first matrix: \n");
	for( r=0; r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter a%d%d element: ",r+1,c+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&a[r][c]);
		}
	}
	printf("Enter the elements of second matrix: \n");
	for( r=0; r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter b%d%d element: ",r+1,c+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&b[r][c]);
		}
	}
	printf("Sum of Matrix: \n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%.1f ",a[r][c]+b[r][c]);
		}
		printf("\n");
	}
}
