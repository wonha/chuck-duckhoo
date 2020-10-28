//
// Created by Wonha Shin on 2020/10/28.
//
#include <cstdio>

int my_10950() {
    int cnt, a, b;
    scanf("%d", &cnt);
    for (; cnt-->0;) {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}

