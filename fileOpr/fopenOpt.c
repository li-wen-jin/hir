#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc < 2) {
        printf("usage:cmd + filename\n");
        return 1;
    }
    FILE *fp = fopen(argv[1], "r");
    if(!fp) {
        perror("open file");
        return 1;
    }
    int i;
    char c;
    while(~(c = fgetc(fp)))
        printf("%c", c);
    fclose(fp);
    return 0;
}
