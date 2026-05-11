#include <cstdlib>
#include <iostream>
using namespace std;

long long gcdll(long long a, long long b) {
    if (a < 0) {
        a = a * -1;
    }

    if (b < 0) {
        b = b * -1;
    }

    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    long long p, q;
    cout << "Zadaj p, q: ";
    cin >> p >> q;

    long long d = gcdll(p, q);

    p = p / d;
    q = q / d;

    if (q < 0) {
        p = -p;
        q = -q;
    }

    cout << p << " " << q;

    return 0;
}