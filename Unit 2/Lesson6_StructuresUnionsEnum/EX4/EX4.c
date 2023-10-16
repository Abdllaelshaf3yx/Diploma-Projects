#include "stdio.h"
#include "string.h"
#include "math.h"


struct student{
	char name[30];
	int roll;
	int marks;
};


int main()
{
	struct student s[10];
	int i =0;
	printf("Enter Information For Students:\n");
	for(i = 0; i<10;i++)
	{
		s[i].roll=i+1;
		printf("For Roll number: %d\n",s[i].roll);
		printf("Enter Name: ");
		fflush(stdout);fflush(stdin);
		gets(s[i].name);
		printf("Enter Marks: ");
		fflush(stdout);fflush(stdin);
		scanf("%d",&s[i].marks);
	}
	printf("Displaying Information of Students:\n");
	for(i = 0; i<10;i++)
	{
		s[i].roll=i+1;
		printf("For Roll number: %d\n",s[i].roll);
		printf("Name: %s\n",s[i].name);
		printf("Marks: %d\n",s[i].marks);
	}
	return 0;
}
