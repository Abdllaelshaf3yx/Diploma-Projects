#include<stdio.h>

struct Sstudent{
	char name[30];
	int roll;
	float marks;
};

struct Sstudent scan_Struct()
{
	struct Sstudent student;
	printf("Enter Name: ");
	fflush(stdout);fflush(stdin);
	gets(student.name);
	printf("Enter Roll Number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&student.roll);
	printf("Enter Marks: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&student.marks);
	return student;
}

void display_struct(struct Sstudent student)
{
	printf("name: %s\n",student.name);
	printf("Roll: %d\n",student.roll);
	printf("Marks: %.2f",student.marks);
}

int main()
{
	struct Sstudent student;
	printf("Enter Informations of students: \n");
	student = scan_Struct();
	printf("\nDisplaying Informations\n");
	display_struct(student);
	return 0;
}
