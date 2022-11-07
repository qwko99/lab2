#include <stdio.h>
#include "testlib.h"

int main()
{
	printf("a = 3, b = 5 일때\n"); 
	printf("덧셈(ADD): %d \n", add(3,5));
	printf("뺄셈(SUBTRACT): %d \n", subtract(3,5));
	printf("곱셈(MULTIPLY): %d \n", multiply(3,5));
	printf("나눗셈(DIVIDE) :%d \n", divide(3,5));
}
