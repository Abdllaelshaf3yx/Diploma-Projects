#include <stdio.h>

void main()
{
	float op1,op2,res;
	char operation;
	printf("Enter operator either + or - or * or /: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&operation);
	printf("Enter two operand: ");
	fflush(stdout);fflush(stdin);
	scanf("%f%f",&op1,&op2);
	switch(operation)
	{
	case '+':
		res = op1+op2;
		printf("%f %c %f = %f",op1,operation,op2,res);
		break;
	case '-':
		res = op1-op2;
		printf("%f %c %f = %f",op1,operation,op2,res);
		break;
	case '*':
		res = op1*op2;
		printf("%f %c %f = %f",op1,operation,op2,res);
		break;
	case '/':
		res = op1/op2;
		printf("%f %c %f = %f",op1,operation,op2,res);
		break;
	}
}
