#include <stdio.h>

int main() {

    fputc('A', stdout);     //stdout是行缓冲，stderr是无缓冲
    fputc('\n', stdout);
    while(1) {

    };

    return 0;
}
