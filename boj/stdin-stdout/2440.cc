/**
 * Problem link: http://boj.kr/2440
 * 문제
첫째 줄에는 별 N개, 둘째 줄에는 별 N-1개, ..., N번째 줄에는 별 1개를 찍는 문제

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

예제 입력 1
5
예제 출력 1
*****
****
***
**
*
 */

#include <cstdio>

int main_2440() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int star = num - i; star > 0; star--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

