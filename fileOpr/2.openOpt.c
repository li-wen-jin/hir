#include <stdio.h>
#include <sys/types.h>
#include <sys/stat>


int main(int argc, char *argv[]) {

    if(argc < 2) {
        printf("usage:cmd + filename");
        return -1;
    }
    int fd = open(argv[1], O_WRONLY | O_CREAT, 0644);
    if(fd < 0) {
        perror("OPEN");
        return -1;
    } else {
        perror("kaikeba");
    }

    return 0;
}
