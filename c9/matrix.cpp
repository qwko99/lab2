#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector> // vector 사용을 위해

using namespace std;

int main()
{

    int row, col;

    printf("행렬 크기를 입력해주세요(X Y) : ");
    scanf("%d %d", &row, &col);

    vector<vector<int>> matrix1;
    vector<vector<int>> matrix2;
    vector<vector<int>> matrix_result;

    vector<int> v2; // 2차원 배열을 하기위해 필수

    printf("%d X %d 헹렬 생성", row, col);

    srand((unsigned int)time(NULL)); // seed값으로 현재시간 부여

    printf("\n=============================\n");

    printf("첫 번째 행렬\n");
    for (int i = 0; i < row; i++)
    {
        matrix1.push_back(v2); // matrix1에 v2공간 생성

        for (int j = 0; j < col; j++)
        {
            matrix1[i].push_back(rand() % 10); // 0~9
            cout << matrix1[i][j] << " ";
        }
        printf("\n");
    }

    printf("\n=============================\n");

    printf("두 번째 행렬\n");
    for (int i = 0; i < row; i++)
    {
        matrix2.push_back(v2);

        for (int j = 0; j < col; j++)
        {
            matrix2[i].push_back(rand() % 10); // 0~9
            cout << matrix2[i][j] << " ";
        }
        printf("\n");
    }

    printf("\n=============================\n");

    printf("덧셈된 행렬\n");
    for (int i = 0; i < row; i++)
    {
        matrix_result.push_back(v2);

        for (int j = 0; j < col; j++)
        {
            matrix_result[i].push_back(matrix1[i][j] + matrix2[i][j]); // 0~9
            cout << matrix_result[i][j] << " ";
        }
        printf("\n");
    }
}