#include <bits/stdc++.h>
using namespace  std;

int main () {
    int n;
    int best = 0; 
    cin >> n; 
    vector<char>a(n);
    for (int i = 0; i<n; i++) cin >> a[i]; 


    for(int k = 0; k <= n; k++) {

    vector<int>bS(n + 1), bH(n + 1), bP(n + 1);
    for (int i = 0; i < k; i++) {
        bS[i + 1] = bS[i] + (a[i] == 'S');
        bH[i + 1] = bH[i] + (a[i] == 'H');
        bP[i + 1] = bP[i] + (a[i] == 'P');
    
    }
    vector<int>aS(n + 1), aH(n + 1), aP(n + 1);
    for (int i = k; i < n; i++) {
        aS[i + 1] = aS[i] + (a[i] == 'S');
        aH[i + 1] = aH[i] + (a[i] == 'H');
        aP[i + 1] = aP[i] + (a[i] == 'P');
    }
    
    int before = max({bS[k], bH[k], bP[k]});
    int after = max({aS[n], aH[n], aP[n]});
    best = max(best, before + after);
    }

    cout << best << "\n";

}