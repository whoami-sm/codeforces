#include <bits/stdc++.h>
#define int int64_t
#define long int64_t
#define DEBUG
using namespace std;

// @author: whoami-sm

signed main (){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, q;
    if (!(cin >> n >> m >> q)) return 0;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(n + 1, 0);
    b[0] = a[0];
    for (int i = 1; i < n; i++) {
        b[i] = a[i] - a[i - 1];
    }

    while (m--) {
        int l, r, x;
        cin >> l >> r >> x;
        l--; r--;
        b[l] += x;
        b[r + 1] -= x;
    }
    
    vector<int> c(n);
    c[0] = b[0];
    for (int i = 1; i < n; i++) {
        c[i] = c[i - 1] + b[i];
    }

    vector<int> d(n + 1, 0);
    for (int i = 0; i < n; i++) {
        d[i + 1] = d[i] + c[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << d[r + 1] - d[l] << "\n";
    }

    return 0;
}
