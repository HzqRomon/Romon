/*************************************************************************
    E
	> File Name: 235.cpp
	> Author   : HzqRomon
	> Mail     : sunsethzq@gmail.com
	> Created Time: 2019年07月13日 星期六 12时38分51秒
 ************************************************************************/

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <iostream>
using namespace std;
#define MAX_N 10
int arr[MAX_N + 5];

int fun(int k, int ind, int n, int *arr) {
    if (k != 0) {
        for(int i = 0; i < k; i++) {
            i == 0 || cout << " ";
            cout << arr[i];
        }
        cout << endl;
    }
    
    for (int i = ind; i <= n; i++) {
        arr[k] = i;
        fun(k + 1, i + 1, n, arr);
    }
}

int main() {
    int n;
    cin >> n;
    fun(0, 1, n, arr);
    return 0;
}
