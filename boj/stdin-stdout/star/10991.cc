/**
 * Problem link: http://boj.kr/10991
 *
 * 문제
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

예제 입력 1
1
예제 출력 1
*
예제 입력 2
2
예제 출력 2
 *
* *
예제 입력 3
3
예제 출력 3
  *
 * *
* * *
예제 입력 4
4
예제 출력 4
   *
  * *
 * * *
* * * *
 */

#include <cstdio>

int main_10991() {
    int num;
    scanf("%d", &num);

    for (int line = 1; line <= num; line++) {
        for (int i = 0; i < num - line; i++) printf(" ");
        for (int i = 0; i < line; i++) printf("* ");
        printf("\n");
    }
    return 0;
}

