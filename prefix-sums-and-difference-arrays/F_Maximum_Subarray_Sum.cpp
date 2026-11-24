#include <bits/stdc++.h>
#define int int64_t
#define long int64_t
#define DEBUG
using namespace std;

// @author: whoami-sm
/*An implementation of the bruteforce algorithm to solve the maximum sub array problem */
signed main (){
    ios::sync_with_stdio(false);
    int n;
    cin >> n; // receiving (n) the number of inputs for the query
    // building the array (a) from n
    vector<int>a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // now initialing the first subarray to compare to

    int first = a[0];
    for (int i = 0; i < n; i++) {
        int sum = 0; 
        for (int j = i; j < n; j++) {
            sum += a[j];
    first = max(sum, first);
        }
    }
    cout << first << "\n";
    return 0;
}