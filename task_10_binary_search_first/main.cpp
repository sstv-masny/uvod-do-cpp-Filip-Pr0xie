
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int x;
    cin >> x;

    int result = -1;
    int L = 0;
    int H = n - 1;
    while (L <= H) {
        int M = L + (H - L) / 2;
        if (a[M] == x) {
            result = M;
            H = M - 1;
        } else if (a[M] < x) {
            L = M + 1;
        } else {
            H = M - 1;
        }
    }

    cout << result;
    return 0;
}
