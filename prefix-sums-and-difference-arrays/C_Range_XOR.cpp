#include <bits/stdc++.h>
#define int int64_t
#define long int64_t
#define DEBUG
using namespace std;

// @author: whoami-sm

signed main (){
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int>b(n + 1);
    for (int i = 0; i < n; i++) b[i + 1] = b[i] ^ a[i];
    
    
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << (b[l - 1] ^ b[r]) << "\n";
    }

    return 0;
}