#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number % 2 == 0 ) {
        printf("\nResult: %d is an even number.\n", number);
        } else {
            printf("\nResult: %d is an odd number. \n", number);
        }
    

    return 0;
}
