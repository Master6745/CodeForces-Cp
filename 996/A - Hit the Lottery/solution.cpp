#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long n;
    if (cin >> n) {
        int bills[] = {100, 20, 10, 5, 1};
        long long total_bills = 0;
 
        for (int bill : bills) {
            total_bills += n / bill;
            n %= bill;
        }
 
        cout << total_bills << "
";
    }
 
    return 0;
}