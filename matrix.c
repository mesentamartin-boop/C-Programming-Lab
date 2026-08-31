#include <stdio.h>
#include <conio.h>

void readMatrix(int matrix[10][10], int rows, int cols);
void addMatrix(int A[10][10], int B[10][10], int C[10][10], int rows, int cols);
void displayMatrix(int matrix[10][10], int rows, int cols);

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("\nEnter elements of first matrix:\n");
    readMatrix(A, rows, cols);

    printf("\nEnter elements of second matrix:\n");
    readMatrix(B, rows, cols);

    addMatrix(A, B, C, rows, cols);

    printf("\nResultant Matrix after Addition:\n");
    displayMatrix(C, rows, cols);

    return 0;
}

void readMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void addMatrix(int A[10][10], int B[10][10], int C[10][10], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
