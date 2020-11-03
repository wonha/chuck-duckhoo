/**
 * Problem link: http://boj.kr/11720
 */

#include <cstdio>


int main_11720() {
    int cnt, total = 0;
    char s[101];

    scanf("%d", &cnt);
    scanf("%s", s);
    for (int i = 0; i < cnt; i++) {
        total += s[i] - 48;
    }
    printf("%d", total);

    return 0;
}


int main_11720_1(){
    int n, total;
    scanf("%*d");
    while (scanf("%1d", &n) + 1) {
        total += n;
    }
    printf("%d", total);
}

