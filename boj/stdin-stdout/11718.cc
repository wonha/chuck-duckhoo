/**
 * Problem link: http://boj.kr/11718
 */

#include <cstdio>


int main_11718() {
    char s[101];
    while (scanf("%[^\n]\n", s) == 1) {
        printf("%s\n", s);
    }
    return 0;
}

int main_11718_1() {
    char c;
    while ((c = getchar()) + 1)
        putchar(c);
    return 0;
}

int main_11718_2() {
    char s[101];
    while (scanf("%[^\n]\n", s) != EOF)
        printf("%s\n", s);
    return 0;
}

int main_11718_3() {
    char s[101];
    while (scanf("%[^\n]\n", s) == 1)
        printf("%s\n", s);
    return 0;
}

