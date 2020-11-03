/**
 * Problem link: http://boj.kr/11721
 */

#include <cstdio>


int main_11721() {
    char s[11];
    while (scanf("%10s", s) + 1) {
        printf("%s\n", s);
//        puts(s);
    }
    return 0;
}


int main_11721_1() {
    char s[11];
    while (fgets(s, 11, stdin)) {
        puts(s);
    }
    return 0;
}

int main() {
    main_11721();
}
