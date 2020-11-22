/**
 * Problem link: http://boj.kr/11720
 *
 * 문제
N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 숫자의 개수 N (1 ≤ N ≤ 100)이 주어진다. 둘째 줄에 숫자 N개가 공백없이 주어진다.

출력
입력으로 주어진 숫자 N개의 합을 출력한다.

예제 입력 1
1
1
예제 출력 1
1
예제 입력 2
5
54321
예제 출력 2
15
예제 입력 3
25
7000000000000000000000000
예제 출력 3
7
예제 입력 4
11
10987654321
예제 출력 4

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

