#include <stdio.h>

void main()
{
	float x,y,z,max;
	printf("Enter Three numbers: ");
	fflush(stdout);fflush(stdin);
	scanf("%f%f%f",&x,&y,&z);
	max = x;
	if(y > max)
		max = y;
	if(z>max)
		max = z;
	printf("Largest Number: %f",max);


}
