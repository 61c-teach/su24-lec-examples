#include <stdio.h>

int main(int argc, char* argv[]) {
	int x = 1;
	for (int i = 0; i < 100000000; i ++) {
		x += 1;
	}
	printf("%d\n", x);
}
