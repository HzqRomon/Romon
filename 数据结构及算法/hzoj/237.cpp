/*************************************************************************
	> File Name: 237.cpp
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
bool state[MAX_N + 5];

void fun(int k, int n, int *arr) {
    if (k == n) {
        for(int i = 0; i < k; i++) {
            i == 0 || cout << " ";
            cout << arr[i];
        }
        cout << endl;
    }
    
    for (int i = 1; i <= n; i++) {
        if (!state[i]) {
            state[i] = true;
            arr[k] = i;
            fun(k + 1, n, arr);
            state[i] = false;
        }
    }
    return ;
}

int main() {
    int n;
    cin >> n;
    fun(0, n, arr);
    return 0;
}
