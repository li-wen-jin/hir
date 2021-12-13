#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int fd = open("/dev/tty", O_RDONLY | O_NONBLOCK);
    if(fd < 0) {
        perror("OPEN /dev/tty");
        exit(1);
    }
    ssize_t n;
    char buf[20];
    n = read(fd, buf, 10);
    if(n < 0) {
        perror("READ /dev/tty");
        exit(1);
    }
    close(fd);
    return 0;
}
