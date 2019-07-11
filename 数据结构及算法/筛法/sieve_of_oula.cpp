//线性筛--欧拉筛//
#include <stdio.h>
#include <stdlib.h>
#define MAX_N 100000

int prime[MAX_N + 5] = {0};
int isNotPrime[MAX_N + 5] = {1, 1};
int pos = 0;

void is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (!isNotPrime[i])
            prime[pos++] = i;
        for (int j = 0; j < pos && i * prime[j] < n; j++) {
            isNotPrime[i * prime[j]] = 1;
            if (!(i % prime[j]))
                break;
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