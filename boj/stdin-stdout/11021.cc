/**
 * Problem link: http://boj.kr/11021
 */

#include <cstdio>

int main_11021() {
    int c, a, b;
    scanf("%d", &c);
    for (int i = 1; i <= c; i++) {

        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n", i, a + b);
    }
    return 0;
}
