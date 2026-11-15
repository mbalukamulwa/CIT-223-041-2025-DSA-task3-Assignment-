#include <stdio.h>

#define MAX 10

int main(void)
{
    int matrix[MAX][MAX];
    int sparse[MAX * MAX + 1][3];
    int rows, columns;
    int i, j, k = 1;

    printf("Enter number of rows (1-%d): ", MAX);
    if (scanf("%d", &rows) != 1 || rows < 1 || rows > MAX)
    {
        printf("Invalid number of rows.\n");
        return 1;
    }

    printf("Enter number of columns (1-%d): ", MAX);
    if (scanf("%d", &columns) != 1 || columns < 1 || columns > MAX)
    {
        printf("Invalid number of columns.\n");
        return 1;
    }

    printf("Enter the matrix elements row by row:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                printf("Invalid matrix element.\n");
                return 1;
            }
        }
    }

    /* Store only non-zero values with their row and column positions. */
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    /* Header row: original rows, columns and number of non-zero values. */
    sparse[0][0] = rows;
    sparse[0][1] = columns;
    sparse[0][2] = k - 1;

    printf("\nTriplet representation:\n");
    printf("Row\tColumn\tValue\n");

    for (i = 0; i < k; i++)
    {
        printf("%d\t%d\t%d\n",
               sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}
