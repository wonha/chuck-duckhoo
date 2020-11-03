/**
 * Problem link: http://boj.kr/11719
 */

#include <cstdio>

int main_11719() {
    char c;
    while ((c = getchar()) + 1) {
        putchar(c);
    }
    return 0;
}


int main_11719_1() {
    char c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}


int main_11719_2() {
    char c;
    while ((c = fgetc(stdin)) != -1) {
        putchar(c);
    }
    return 0;
}


static const int MAX = 100;
static char input[MAX + 1];
int main_ts3() {
    while (fgets(input, MAX, stdin)) {
        printf("%s", input);
    }
    return 0;
}

