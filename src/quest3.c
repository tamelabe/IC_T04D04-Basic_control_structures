#include <stdio.h>

int fib(int x);

int main(void) {
    int x, filter;
    char c;
    filter = scanf("%d%c", &x, &c);
    if (filter == 2 && c == '\n' && x > 0) {
        printf("%d\n", fib(x));
    } else {
        printf("n/a\n");
    }
}

int fib(int x) {
    if (x == 1 || x == 2)
        return 1;
    return fib(x - 1) + fib(x - 2);
}
