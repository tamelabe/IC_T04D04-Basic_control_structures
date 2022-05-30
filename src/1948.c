#include <stdio.h>

int mbsn(int x);
int sn_check(int x);

int main() {
    int x, res, filter;
    filter = scanf("%d", &x);
    if (filter && x != 1 && x != -1 && x != 0) {
        res = mbsn(x);
        if (res == 0) res = x;
        printf("%d\n", res);
    } else {
        printf("n/a\n");
    }
    return 0;
}

int mbsn(int x) {
    int div_count, dbl_x, res;
    if (x < 0) {
        x = -x;
    }
        res = 0;
    for (int i = 2; i < x; i++) {
        dbl_x = x;
        div_count = 0;
        while (dbl_x - i >= 0) {
            dbl_x = dbl_x - i;
            div_count++;
        }
        if (div_count > res && sn_check(div_count) && dbl_x == 0) res = div_count;
    }
        return res;
}

int sn_check(int x) {
    int div_count, cp_x, res;
    res = 0;
    if (x < 0)
        x = -x;
    div_count = 1;
    for (int i = 2; i <= x; i++) {
        cp_x = x;
        while ((cp_x - i) >= 0) {
            cp_x = cp_x - i;
        }
        if (cp_x == 0) div_count++;
    }
    if (div_count == 2) res = 1;
return res;
}
