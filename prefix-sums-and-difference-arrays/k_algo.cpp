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
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
// the definition of the best subarray and the curr subarray comes before the iterations are done
    int best = a[0], curr = a[0];
    for (int i = 1; i < n; i++) {  // if the loop starts with 0, curr will add a[0] twice, as if the first number showed up in the array twice
        curr = max(a[i], curr + a[i]);
        best = max(best, curr);
    }
    cout << best << "\n";
    return 0;
}



   