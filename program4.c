#include <stdio.h>

int main() {
    int rows, cols, i, j, rowSum = 0, colSum = 0;
    int rowToSum, colToSum;

   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    printf("The given matrix is:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    
    printf("Enter the row number to find the sum: ");
    scanf("%d", &rowToSum);
    printf("Enter the column number to find the sum: ");
    scanf("%d", &colToSum);

   
    for(j = 0; j < cols; j++) {
        rowSum += arr[rowToSum][j];
    }

 
    for(i = 0; i < rows; i++) {
        colSum += arr[i][colToSum];
    }

 
    printf("Sum of elements in row %d = %d\n", rowToSum, rowSum);
    printf("Sum of elements in column %d = %d\n", colToSum, colSum);

    return 0;
}
