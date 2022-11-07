/*dltest.c*/
#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int main()
{
        void *handle;
        int (*add)(int, int), (*subtract)(int, int), (*multiply)(int, int), (*divide)(int, int);
        char *error;

        handle = dlopen("./lib/libtest.so", RTLD_LAZY);
        if (!handle)
        {
                fputs(dlerror(), stderr);
                exit(1);
        }

        add = dlsym(handle, "add");
        if ((error = dlerror()) != NULL)
        {
                fprintf(stderr, "%s", error);
                exit(1);
        }

        subtract = dlsym(handle, "subtract");
        if ((error = dlerror()) != NULL)
        {
                fprintf(stderr, "%s", error);
                exit(1);
        }

        multiply = dlsym(handle, "multiply");
        if ((error = dlerror()) != NULL)
        {
                fprintf(stderr, "%s", error);
                exit(1);
        }

        divide = dlsym(handle, "divide");
        if ((error = dlerror()) != NULL)
        {
                fprintf(stderr, "%s", error);
                exit(1);
        }

        printf("a = 3, b = 5 일때\n");
        printf("덧셈(ADD): %d \n", (*add)(3, 5));
        printf("뺄셈(SUBTRACT): %d \n", (*subtract)(3, 5));
        printf("곱셈(MULTIPLY): %d \n", (*multiply)(3, 5));
        printf("나눗셈(DIVIDE) :%d \n", (*divide)(3, 5));
}
