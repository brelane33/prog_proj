#include <stdio.h>

void swap(int *i, int *j) {
    int t = *i;
    *i = *j;
    *j = t;

}

int main() {
    printf("hello.");
    int a = 23, b = 47;
    printf("Before. a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("After . a: %d, b: %d\n", a, b); 
}
