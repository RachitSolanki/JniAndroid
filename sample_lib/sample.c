#include "sample.h" 
#include <stdio.h>

void print_func(char *str) {
	printf("%s",str);
}

int add(int op1,int op2 ) {
	print_func("Additon function called\n");
	return op1+op2;
}

int subtract(int op1,int op2 ) {
	print_func("Subtraction function called\n");
	return op1-op2;
}

double multiply(int op1,int op2 ) {
	print_func("Multiply function called\n");
	return op1*op2;
}

/*
* FIXME : Didn't check the edge cases
*/
double divide(int op1,int op2 ) {
	print_func("Divide function called\n");
	return op1/op2;
}

