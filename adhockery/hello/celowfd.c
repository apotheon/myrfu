#include <unistd.h>
#include <fcntl.h>

int main() {
	int i = 0;
	int fd = open("/dev/fd/1", O_WRONLY);

	write(fd, "helow world\n", 12);

	close(fd);
	return 0;
}
