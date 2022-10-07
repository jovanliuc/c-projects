#include <stdio.h>

int *max(int, int);

int main() {

    int *maxVal = max(1, 2);
    printf("%d", maxVal);
    return 0;
}

int *max(int x, int y) {
    return x >= y ? &x : &y;
} 