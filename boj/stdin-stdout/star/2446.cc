/**
 * Problem link: http://boj.kr/2446
 *
 * 문제
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.

예제 입력 1
5
예제 출력 1
*********
 *******
  *****
   ***
    *
   ***
  *****
 *******
*********
 */

#include <cstdio>

int main_2446() {
    int num; // 5
    scanf("%d", &num);

    for (int i = 0; i < num - 1; i++) { // 0, 1, 2, 3, 4
        for (int s = 1; s <= i; s++) {
            printf(" ");
        }

        for (int s = 1; s <= (num - i) * 2 - 1; s++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = num - 1; i >= 0; i--) { // 0, 1, 2, 3, 4
        for (int s = 1; s <= i; s++) {
            printf(" ");
        }
        for (int s = 1; s <= (num - i) * 2 - 1; s++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;

}

