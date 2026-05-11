
#include <iostream>

using namespace std;
int main() {
    long long n;
    cout << "Zadaj cislo: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << "even";
    } else {
        cout << "odd";
    }
    return 0;
}
