//
// Created by Wonha Shin on 2020/10/28.
//

#include <iostream>

int my_1000() {
    auto a = 0, b = 0; // todo: 'auto' is type inference
    std::cin >> a >> b;
    std::cout << a + b << std::endl;
    return 0;
}