#include <stdio.h>

int main() {
    int rows, cols, i, j, largest;

   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

   
    printf("Enter the elements of the array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

   
    largest = arr[0][0];

   
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

   
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
