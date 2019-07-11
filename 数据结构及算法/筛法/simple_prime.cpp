/// 最简单的求素数的方法 ///

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>

bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("n以内的素数有：\n");
    for (int i = 2; i < n; i++) {
        if (is_prime(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}