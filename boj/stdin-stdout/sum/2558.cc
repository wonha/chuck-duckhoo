/**
 * Problem link: http://boj.kr/2558
 *
 * 문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 A, 둘째 줄에 B가 주어진다. (0 < A, B < 10)

출력
첫째 줄에 A+B를 출력한다.

예제 입력 1
1
2
예제 출력 1
3
 */

#include <cstdio>

int main_2558() {
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d", a + b);

    return 0;
}