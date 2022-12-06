# include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    const int n = 9;
    int A[9][9];
    int b[9 * 9];
    for (int i = 0; i < n * n; i++)
    {
        b[i] = i + 1;
    }
    int a = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i; j < n - i; j++)
        {
            A[j][i] = b[a];
            a++;
        }
        for (int j = i + 1; j < n - i - 1; j++)
        {
            A[n - i - 1][j] = b[a];
            a++;
        }
        for (int j = n - 1 - i; j > i; j--)
        {
            A[j][n - i - 1] = b[a];
            a++;
        }
        for (int j = n - 1 - i; j > i; j--)
        {
            A[i][j] = b[a];
            a++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

}