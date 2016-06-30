#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main() {
    int a = 5;
    int b = 10;
    int *pa = &a;
    int *pb = &b;
    printf("a=%d, b=%d\n", a, b);

    swap(pa, pb);

    printf("a=%d, b=%d\n", a, b);

    return 0;
}
