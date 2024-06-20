#include <stdio.h>

int main(int argc, char* argv[]) {
	int arr[3] = {0, 1, 2};

	printf("arr:     %p\n", arr);
	printf("&arr[0]: %p\n", &arr[0]);
	printf("&arr:   %p\n", &arr);
}
