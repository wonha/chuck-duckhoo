/**
 * Problem link: http://boj.kr/10953
 */

#include <cstdio>

int main_10953() {
    int c, a, b;

    for (scanf("%d", &c); c-- > 0;) {
        scanf("%d,%d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}

