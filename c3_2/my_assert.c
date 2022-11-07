




#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>

int my_assert(int expression)
{
    if (expression == 0) // FALSE 이라면
    {
        printf("%s: %s:%d: ", __func__,__FILE__, __LINE__);
       return 0; // FALSE
    }
    else    
        return 1; // TRUE 
}

void foo(int num)
{
	if(my_assert(((num >=0) && (num <= 100))) == 0)
	{
		printf("%s: Assertion '%s' failed.\n", __func__,"(num >=0) && (num <= 100)");

		abort();
	}

	printf("foo: num = %d\n", num);
}

int main(int argc, char *argv[])
{
       int num;

        if(argc < 2) {
                printf("Usage : my_assert aNumber\n(0 <= aNumber <= 100)\n");
                exit(1);
        }
        
	num = atoi(argv[1]);
	foo(num);
}

