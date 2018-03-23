#include <unistd.h>

int main() {
	int i = 0;

	for (; i < 1000000; ++i) {
		write(1, "helow world\n", 12);
	}

	return 0;
}
