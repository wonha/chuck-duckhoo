/**
 * Problem link: http://boj.kr/1000
 *
 * 문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
첫째 줄에 A+B를 출력한다.

예제 입력 1
1 2
예제 출력 1
3
 */

#include <iostream>

int main_1000() {
    auto a = 0, b = 0; // todo: 'auto' is type inference
    std::cin >> a >> b;
    std::cout << a + b << std::endl;
    return 0;
}