#include <stdio.h>

void addOne(int y) {
	y += 1;
	printf("y in addOne is: %d\n", y);
}

void addOnePointer(int *y) {
	*y += 1;
	printf("y in addOnePointer is: %d\n", *y);
}

int main (int argc, char* argv[]){
	int x = 3;
	printf("x in main is: %d\n", x);

	addOne(x);
	printf("x in main is: %d\n", x);

	addOnePointer(&x);
	printf("x in main is: %d\n", x);

	return 0;
}

