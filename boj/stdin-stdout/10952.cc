/**
 * Problem link: http://boj.kr/10952
 */

#include <cstdio>

int main_10952() {
    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        if (!(a == 0 and b == 0)) {
            printf("%d\n", a + b);
        }
    }

    return 0;
}


