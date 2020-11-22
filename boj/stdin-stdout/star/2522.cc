/**
 * Problem link: http://boj.kr/2522
 *
 * 문제
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.

예제 입력 1
3
예제 출력 1
  *
 **
***
 **
  *
 */

#include <cstdio>


int main_2522() {
    int num; // 5
    scanf("%d", &num);

    for (int line = 1; line < num; line++) { // 1, 2, 3, 4
        for (int s = 0; s < num - line; s++) printf(" "); // 4, 3, 2, 1
        for (int s = 0; s < line; s++) printf("*"); // 1, 2, 3, 4
        printf("\n");
    }

    for (int line = 1; line <= num; line++) {
        for (int i = 0; i < line - 1; i++) printf(" ");
        for (int i = 0; i < num - line + 1; i++) printf("*");
        printf("\n");
    }

    return 0;

}

