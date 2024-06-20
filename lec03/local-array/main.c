#include <stdio.h>                  

int* foo() { 
	int ret[2] = {164612, 98712653};
	return ret; 
}       

/* The below function is used to simulate "doing work" */
int bar(int a, int b, int c) {
	return a + b + c;
}

int main(int argc, char *argv[]) {  
    int* temp = foo();

	// Start simulating doing work
	int sum;
	for (int i = 0; i < 10000; i++) {
		int stuff = bar(i, 1434, 0xDEADBEEF);
		sum += stuff;
	}
	printf("doing some work (IGNORE THIS): %d\n", sum);
	// Stop simulating doing work

    printf("temp[0]: %d\n", temp[0]);       // Print what foo returns

    return 0;                      
}

