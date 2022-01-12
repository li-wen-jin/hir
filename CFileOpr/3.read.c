#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[]) {
    char buf[20];
    int n, i;
    n = read(STDIN_FILENO, buf, 10); //从标准输入中读入数据
    if(n < 0) {
        perror("READ STDIO");        //打印错误信息
        exit(1);
    }
    printf("read %d Bytes\n", n);
    write(STDOUT_FILENO, buf, n);   //从标准输出中输出数据
    write(STDOUT_FILENO, "\n", 1);

    return 0;
}
