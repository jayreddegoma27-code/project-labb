#include <stdio.h>

int main() {
   int a = 10, b = 5;
   int sum, diff, prod, qout;
   int result;
   
   sum = a + b;
   diff = a - b;
   prod = a * b;
   qout = a / b;
   
   printf("Arithmetic Operation:\n");
   printf("Sum %d\n", sum);
   printf("Difference %d\n", diff);
   printf("Product %d\n", prod);
   printf("Qoutient %d\n\n", qout);
   
   printf("Logical Operation:\n");
   result = (a > b) && (b > 0);
   printf("a > b AND b > 0: %d\n", result);
   
   result = (a < b) || (b == 5);
   printf("a < b OR b == 5: %d\n", result);\
   
   result = !(a == b);
   printf("Not (a == b): %d\n\n", result);
   
   printf("Assignment Operations: \n");
   a += 2;
   printf("a after += 2: %d\n", a);
   
   b *= 3;
   printf("b after *= 3: %d\n", b);
   
   a -= 1;
   printf("a after -= 1: %d\n", a);
   
   b /= 5;
   printf("b after /= 5: %d\n", b);
   
 
    return 0;
}