#include <bits/stdc++.h>
#define int int64_t
#define long int64_t
#define DEBUG
using namespace std;

// @author: whoami-sm

signed main (){
    ios::sync_with_stdio(false);
   int n, m;
   cin >> n >> m;

   vector<int>a(n);
   for (int i = 0; i < n; i++) cin >> a[i];

   vector<int>b(n + 1);
    b[0] = a[0];
    for (int i = 1; i < n; i++){ 
        b[i] = a[i] - a[i - 1];
    }
    
    while (m--) {
        int l, r, x;
        cin >> l >> r >> x;
        l--; r--;
        b[l] += x;
        b[r + 1] -= x;
    }

    vector<int>c(n);
    c[0] = b[0];
    for (int i = 1; i < n; i++) {
        c[i] = c[i - 1] + b[i];
    }

    for (int i = 0; i < n; i++ ){
        cout << c[i] << " ";
    }
    cout << "\n";
    return 0;
}