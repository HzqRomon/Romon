#include <stdio.h>
#include <stdlib.h>

void insert(int a[], int len) {
	int key;
	for (int j = 1; j < len; j++) {
		key = a[j];
		int i = j - 1;
		while (i >= 0 && a[i] > key) {
			a[i + 1] = a[i];
			i--;
		}
		a[i + 1] = key;
	}
}

int main() {
	int n;
	int a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	insert(a, n);
	for (int i = 0; i < n; i++) {
		printf("%d%c", a[i], (i == n -1) ? '\n' : ' ');
	}
	return 0;
}