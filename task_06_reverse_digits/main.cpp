using namespace std;
#include <iostream>

int main() {
    unsigned long long n;
    cout << "Zadaj n: ";
    cin >> n;

    long long opacne = 0;

    while (n > 0) {
        int cislica = n % 10;
        opacne = opacne * 10 + cislica;
        n = n / 10;
    }

    cout << opacne;

    return 0;
}
