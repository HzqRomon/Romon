#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
	return a < b;
}

int binarysearch(int a[], int l, int r, int target) {
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (target == a[mid]) {
			return mid;
		} else if (target < a[mid]) {
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	return -1;
}

int main() {
	int n;
	int a[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n, cmp);

	int m;
	scanf("%d", &m);

	int b = binarysearch(a, 0, n, m);
	printf("%d\n", b);
	return 0;
}