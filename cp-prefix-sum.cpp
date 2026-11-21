#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int>b(n + 1);
    for (int i = 0; i < n; i++) {
        b[i + 1] = a[i] + b[i]; // b[i] is the actual prefix sum 
    }                           // b[i + 1] is the (i + 1st) prefix sum array that is added to a[ith array]

    for (int i = 1; i <= n; i++) { 
        cout << b[i] << " ";
    }

}