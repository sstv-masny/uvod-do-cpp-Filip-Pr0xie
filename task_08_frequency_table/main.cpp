#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;

    vector<int> counts(101, 0);

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;

        if (value >= 0 && value <= 100) {
            counts[value]++;
        }
    }

    for (int i = 0; i <= 100; ++i) {
        if (counts[i] > 0) {
            cout << i << " " << counts[i] << endl;
        }
    }

    return 0;
}