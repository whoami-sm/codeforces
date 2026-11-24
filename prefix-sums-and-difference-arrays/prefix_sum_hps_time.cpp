#include <bits/stdc++.h>
using namespace  std;

int main () {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    int best = 0; 
    cin >> n; 
    vector<char>a(n);
    for (int i = 0; i<n; i++) cin >> a[i]; 


    vector<int>bS(n + 1), bH(n + 1), bP(n + 1);
    for (int i = 0; i < n; i++) {
        bS[i + 1] = bS[i] + (a[i] == 'S');
        bH[i + 1] = bH[i] + (a[i] == 'H');
        bP[i + 1] = bP[i] + (a[i] == 'P');
    }

    for(int k = 0; k <= n; k++) {
    
    int before = max({bS[k], bH[k], bP[k]});
    int after = max({bS[n] - bS[k], bH[n] - bH[k], bP[n] - bP[k]});
    best = max(best, before + after);
    }

    cout << best << "\n";

}