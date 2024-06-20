#include <stdint.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	int32_t a;
	int32_t arr[] = {1, 3, 5};

	printf("sizeof a:        %lu\n", sizeof a);
	printf("sizeof(int32_t): %lu\n", sizeof(int32_t));
	printf("sizeof(arr):     %lu\n", sizeof(arr));
}
