#include <stdio.h>
#include <limits.h>

int main() {
    int n = 1;

    if(*(char *)&n == 1) {
        printf("Little endian\n");
    } else {
        printf("Big endian\n");
    }
    printf("%d bits\n", (int)(CHAR_BIT * sizeof(int *)));
}
