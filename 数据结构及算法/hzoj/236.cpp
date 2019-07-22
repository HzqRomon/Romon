/*************************************************************************
	> File Name: 236.cpp
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

void fun(int k, int m, int ind, int n, int *arr) {
    if (k == m) {
        for(int i = 0; i < k; i++) {
            i == 0 || cout << " ";
            cout << arr[i];
        }
        cout << endl;
    }
    
    for (int i = ind; i <= n; i++) {
        arr[k] = i;
        fun(k + 1, m, i + 1, n, arr);
    }
    return ;
}

int main() {
    int n, m;
    cin >> n >> m;
    fun(0, m, 1, n, arr);
    return 0;
}
