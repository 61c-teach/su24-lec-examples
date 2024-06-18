#include <stdio.h>

int main(int argc, char* argv[]) {
	int *p;                              // Declare p as a pointer to an int
	int x = 3;                           // Declare x as an int
	p = &x;                              // Set p to be the address of x
	printf("Value of  x is %d\n", x);    // Display value of x
	printf("Value of *p is %d\n", *p);   // Display value of *p
	*p = 5;                              // Set *p to 5
	printf("Value of  x is %d\n", x);    // Display value of x
	printf("Value of *p is %d\n", *p);   // Display value of *p
}
