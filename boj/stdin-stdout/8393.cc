/**
 * Problem link: http://boj.kr/8393
 *
 * 문제
John got a bad mark in math. The teacher gave him another task. John is to write a program which computes the sum of integers from 1 to n. If he manages to present a correct program, the bad mark will be cancelled.

Write a program which:

reads the number n from the standard input,
computes the sum of integers from 1 to n,
writes the answer to the standard output.
입력
The first and only line of the standard input contains one integer n (1 ≤ n ≤ 10 000).



출력
One integer is to be written to the standard output. This integer should be the sum of integers from 1 to n.

예제 입력 1
3
예제 출력 1
6
 */

#include <cstdio>


int main_8393() {
    int num;
    scanf("%d", &num);

    int total = 0;
    for (int i = 1; i <= num; i++) {
        total += i;
    }
    printf("%d\n", total);
    return 0;
}

int main_another() {
    int num;
    scanf("%d", &num);

    int res = num * (num + 1) / 2;
    printf("%d", res);
    return 0;

}

