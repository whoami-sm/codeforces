#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, q;
    cin >> n >> q;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int>b(n + 1);
    for (int i = 0; i < n; i++) {
        b[i + 1] = a[i] + b[i]; // this builds the prefix sum array
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << (b[r] - b[l - 1]) << "\n"; // but this performs the range sum operation from the defined prefix sum array
    }
}