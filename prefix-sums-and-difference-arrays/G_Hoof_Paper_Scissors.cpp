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

    // iterate through the initial built array before the switch is made
    // and count the getures farmer john makes as and when he makes them

    for(int i = 0; i < k; i++) { // the point before the switch is done
        if (a[i] == 'H') bH++; // if farmer john makes (H) increase the H count by 1
            else if (a[i] == 'P') bP++; // if farmer john makes (P) increase by 1
        else bS++; // if farmer john makes (S)  increase by one
        }
    
// the isse now is that anytime farmer john makes a particular gesture the counting starts from scratch
    int aS = 0; int aH = 0; int aP = 0;
    for (int i = k; i < n; i++) { // the point after the switch is done
        if (a[i] == 'H') aH++; // if farmer john makes (H) increase the H count by 1
            else if (a[i] == 'P') aP++;// if farmer john makes (P) increase by 1
        else aS++;// if farmer john makes (S)  increase by one
    }

    int before  = max({bH, bP, bS}); // max of wins before switch
    int after = max({aH, aP, aS}); // max of wins after switch 
    int best = max({best, before + after}); 
}
    cout << best << "\n";
    return 0;
}




