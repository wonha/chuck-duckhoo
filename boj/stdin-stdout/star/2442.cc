/**
 * Problem link: http://boj.kr/2442
 * 문제
첫째 줄에는 별 1개, 둘째 줄에는 별 3개, ..., N번째 줄에는 별 2×N-1개를 찍는 문제

별은 가운데를 기준으로 대칭이어야 한다.

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

예제 입력 1
5
예제 출력 1
    *
   ***
  *****
 *******
*********
 */

#include <cstdio>


int main_2442() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int space = i; space < num - 1; space++) {
            printf(" ");
        }

        for (int star = 0; star < i * 2 + 1; star++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

