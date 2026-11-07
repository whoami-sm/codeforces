#include <bits/stdc++.h>
#define int int64_t
#define long int64_t
#define DEBUG
using namespace std;

// @author: whoami-sm

signed main (){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector <int> b(n + 1);
    for (int i = 0; i < n; i++) {
        b[i + 1] = b[i] + a[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << b[i] << " ";
    }
    cout << "\n";
}