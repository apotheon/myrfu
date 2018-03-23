#include <stdio.h>

int main() {
	int i = 0;
	for (; i < 1000000; ++i) {
		printf("%s\n", "hello world");
	}

	return 0;
}
