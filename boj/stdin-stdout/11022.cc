/**
 * Problem link: http://boj.kr/11022
 */

#include <cstdio>

int main_11022() {
    int n, a, b;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
    }

    return 0;
}

