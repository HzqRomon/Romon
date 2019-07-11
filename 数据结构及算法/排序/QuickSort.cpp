#include <stdio.h>
#include <stdlib.h>

void quickSort(int a[], int low, int high) {
	int l = low, r = high;
	if (l > r)
		return ;
	int tmp = a[l];
	while (l != r){
		while (l < r && a[r] >= tmp) r--;
		while (l < r && a[l] <= tmp) l++;
		if (l < r) {
			int t = a[r];
			a[r] = a[l];
			a[l] = t;
		}
	}
	a[low] = a[l];
	a[l] = tmp;
	quickSort(a, low, l - 1);
	quickSort(a, l + 1, high);
}

int main() {
	int n;
	int a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	quickSort(a, 0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d%c", a[i], (i == n - 1) ? '\n' : ' ');
	}
}