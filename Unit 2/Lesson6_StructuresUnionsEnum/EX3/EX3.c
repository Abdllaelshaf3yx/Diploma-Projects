#include "stdio.h"
#include "string.h"
#include "math.h"


struct complex{
	float real;
	float complex;
};

struct complex readStruct()
{
	struct complex A;
	printf("Enter real Num: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&A.real);
	printf("Enter complex Num: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&A.complex);
	return A;
}

struct complex addComplex(struct complex A,struct complex B)
{
	struct complex sum;
	sum.real = A.real + B.real;
	sum.complex = A.complex+B.complex;
	return sum;
}
void struct_print(struct complex sum)
{
	printf("%.1f + %.1fi",sum.real,sum.complex);

}

int main()
{
	struct complex A= readStruct();
	struct complex B=readStruct();
	struct complex sum = addComplex(A,B);
	struct_print(sum);
	return 0;
}
