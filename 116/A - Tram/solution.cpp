#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    int current_passengers = 0;
    int max_capacity = 0;
 
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
 
        current_passengers = current_passengers - a + b;
        max_capacity = max(max_capacity, current_passengers);
    }
 
    cout << max_capacity << "
";
 
    return 0;
}