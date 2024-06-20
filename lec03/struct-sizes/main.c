#include <stdio.h>
#include <stdint.h>

struct foo {
	int8_t a;
	int32_t c;
	int16_t b;
};

struct bar {
	int32_t c;
	int16_t b;
	int8_t a;
};

int main(int argc, char *argv[]) {
	printf("sizeof(struct foo): %lu\n", sizeof(struct foo));
	printf("sizeof(struct bar): %lu\n", sizeof(struct bar));
}
