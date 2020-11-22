/**
 * Problem link: http://boj.kr/11719
 *
 * 문제
입력 받은 대로 출력하는 프로그램을 작성하시오.

입력
입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 각 줄은 100글자를 넘지 않으며, 빈 줄이 주어질 수도 있고, 각 줄의 앞 뒤에 공백이 있을 수도 있다.

출력
입력받은 그대로 출력한다.

예제 입력 1
    Hello

Baekjoon
   Online Judge
예제 출력 1
    Hello

Baekjoon
   Online Judge
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

