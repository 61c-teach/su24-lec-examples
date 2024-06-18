#include <stdio.h>                  

int main(int argc, char *argv[]) {  
    printf("%s\n", "Hello World!");  // %s means print a string

    int num = 1234; 
    printf("Decimal: %d\n", num);    // %d means print a decimal number
    printf("Hex:     %X\n", num);    // %x means print a hexadecimal number
    printf("argv[%d], %s", 
        argc - 1, argv[argc - 1]);   // You can use multiple arguments 
    return 0;                       
}

