#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int row, col;

    printf("행렬 크기를 입력해주세요(X Y) : ");
    scanf("%d %d", &row, &col);

    int **matrix_ptr1;
    int **matrix_ptr2;

    int **matrix_result_ptr;

    printf("%d X %d 헹렬 생성", row, col);

    matrix_ptr1 = (int **)malloc(row * sizeof(int));
    matrix_ptr2 = (int **)malloc(row * sizeof(int));
    matrix_result_ptr = (int **)malloc(row * sizeof(int));

    for (int i = 0; i < row; i++)
    {
        matrix_ptr1[i] = (int *)malloc(col * sizeof(int));
        matrix_ptr2[i] = (int *)malloc(col * sizeof(int));
        matrix_result_ptr[i] = (int *)malloc(col * sizeof(int));
    }

    srand((unsigned int)time(NULL)); // seed값으로 현재시간 부여

    printf("\n=============================\n");

    printf("첫 번째 행렬\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix_ptr1[i][j] = rand() % 10; // 0~9
            printf("%d ", matrix_ptr1[i][j]);
        }
        printf("\n");
    }

    printf("\n=============================\n");

    printf("두 번째 행렬\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix_ptr2[i][j] = rand() % 10; // 0~9
            printf("%d ", matrix_ptr2[i][j]);
        }
        printf("\n");
    }

    printf("\n=============================\n");

    printf("덧셈된 행렬\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix_result_ptr[i][j] = matrix_ptr1[i][j] + matrix_ptr2[i][j]; // 0~9
            printf("%d ", matrix_result_ptr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        free(matrix_ptr1[i]);
        free(matrix_ptr2[i]);
        free(matrix_result_ptr[i]);
    }
    free(matrix_ptr1);
    free(matrix_ptr2);
    free(matrix_result_ptr);
}