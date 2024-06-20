#include <stdio.h>

int main(int argc, char* argv[]) {
	int32_t arr[] = {0, 1, 2, 3, 4};
	int32_t *p = &arr[2];
	int32_t *q = p + 2;

	printf("p     = %d\n", p);
	printf("p + 1 = %d\n", p + 1);
	printf("p - 1 = %d\n", p - 1);
	printf("q - p = %d\n", q - p);
	printf("p - q = %d\n", p - q);
}
