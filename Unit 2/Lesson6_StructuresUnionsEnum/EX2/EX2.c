#include<stdio.h>

struct Sdistance{
	int feet;
	float inch;
};

struct Sdistance scan_Struct()
{
	struct Sdistance s;
	printf("Enter Information distance\n");
	printf("Enter Feet: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&s.feet);
	printf("Enter Inch: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&s.inch);
	return s;
}

void display_struct_sum(struct Sdistance s1,struct Sdistance s2)
{
	printf("\nSum Of distances= %d'-%.1f\"",((s1.feet)+(s2.feet)),((s1.inch)+(s2.inch)));

}

int main()
{
	struct Sdistance s1,s2;
	s1 = scan_Struct();
	s2 = scan_Struct();
	display_struct_sum(s1,s2);
	return 0;
}
