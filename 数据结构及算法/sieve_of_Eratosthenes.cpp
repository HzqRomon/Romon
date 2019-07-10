///埃拉托斯特尼筛法///
#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100000

int prime[MAX_N + 5] = {0};
int check[MAX_N + 5] = {0}; //0代表是素数
int pos = 0;

void is_prime(int n) {
    for (int i = 2; i <= n; i++) {
        if (!check[i]) {
            prime[pos++] = i;
        }
        for (int j = i * 2; j <= n; j += i) {
            check[j] = 1;
        }
    }
    for (int i  = 0; i < pos; i++) {
        printf("%d%c", prime[i], (i == pos - 1) ? '\n' : ' ');
    }
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    is_prime(n);

    return 0;
}
