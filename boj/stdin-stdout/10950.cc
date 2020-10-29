/**
 * Problem link: http://boj.kr/10950
 */

#include <cstdio>

int main_10950() {
    int cnt, a, b;
    scanf("%d", &cnt);
    for (; cnt-->0;) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}

