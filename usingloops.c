#include <stdio.h>

int main() {
    
    printf("Using while loop (1 to 10):\n");
    int i;
    while (i <= 10); {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");
    
    printf("Using for loop (even numbers 2 to 20: \n");
    for (i = 2; i <= 20; i += 2){
        printf("%d ", i);
    }
    printf("\n\n");
    
    printf("Using do-while loop (1 to 5):\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    
    printf("\n");


    return 0;
}
