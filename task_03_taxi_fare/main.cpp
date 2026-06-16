
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    long long k;
    cin >> k;
    if (k <= 2) {
        cout << "4.00";
    } else {
        double temp = 4.00 + 1.50 * ceil(k - 2);
        cout << fixed << setprecision(2) << temp;
    }

    return 0;
}
