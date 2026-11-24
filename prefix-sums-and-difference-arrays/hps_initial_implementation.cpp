#include <bits/stdc++.h>
using namespace std;



int main () {
    int n; 
    int best = 0;
    cin  >> n;
    vector<char>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int k = 0; k <= n; k++) {
    int bS = 0; int bH = 0; int bP = 0;
    for(int i = 0; i < k; i++) { 
        if (a[i] == 'H') bH++; 
            else if (a[i] == 'P') bP++; 
        else bS++; 
        }
    int aS = 0; int aH = 0; int aP = 0;
    for (int i = k; i < n; i++) { 
        if (a[i] == 'H') aH++; 
            else if (a[i] == 'P') aP++;
        else aS++;
    }
    
    int before  = max({bH, bP, bS});
    int after = max({aH, aP, aS});  
    best = max({best, before + after}); 
}
    cout << best << "\n";
    return 0;
}




