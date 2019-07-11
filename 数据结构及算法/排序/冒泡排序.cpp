#include <stdio.h>
#include <stdlib.h>

void bubble(int a[], int len) {
    int temp;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
	int n;
	scanf("%d", &n);
	int a[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	bubble(a, n);
	for (int i = 0; i < n; i++) {
		printf("%d%c", a[i], (i == n - 1) ? '\n' : ' ');
	}
	return 0;
}
