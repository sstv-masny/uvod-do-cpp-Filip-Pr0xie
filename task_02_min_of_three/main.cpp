
#include <iostream>

using namespace std;
int main() {
    long long a, b, c;
    cout << "Zadaj cisla a,b,c: ";
    cin >> a >> b >> c;
    long long min = b;
    if (a < b) {
        min = a;
    }
    if (c < b) {
        min = c;
    }
    cout << min;
    return 0;
}
