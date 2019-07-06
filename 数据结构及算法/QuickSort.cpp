#include <stdio.h>
#include <stdlib.h>

void quickSort(int a[], int low, int high) {
	int l = low, r = high;

	if (low < high) {
		int tmp = a[low];
		while (l != r){
			while (l < r && a[r] >= tmp) r--;
			if (l < r) {
				a[l] = a[r];
				l++;
			}

			while (l < r && a[l] <= tmp) l++;
			if (l < r) {
				a[r] = a[l];
				r--;
			}
		}
		a[l] = tmp;
		quickSort(a, low, l - 1);
		quickSort(a, l + 1, high);
	}
}

int main() {
	int n;
	int a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	quickSort(a, 0, n);

	for (int i = 0; i < n; i++) {
		printf("%d%c", a[i], (i == n - 1) ? '\n' : ' ');
	}
}