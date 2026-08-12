#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        int evenIndexOddValue = 0;
        int oddIndexEvenValue = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
 
            if (i % 2 == 0 && a[i] % 2 == 1) {
                evenIndexOddValue++;
            }
 
            if (i % 2 == 1 && a[i] % 2 == 0) {
                oddIndexEvenValue++;
            }
        }
 
        if (evenIndexOddValue != oddIndexEvenValue) {
            cout << -1 << '
';
        } else {
            cout << evenIndexOddValue << '
';
        }
    }
 
    return 0;
}