#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    string novy = "";

    for (int i = 0; i < s.length(); ++i) {
        if (isalnum(s[i])) {
            novy += tolower(s[i]);
        }
    }

    bool pal = true;

    int left = 0;
    int right = novy.length() - 1;

    while (left < right) {
        if (novy[left] != novy[right]) {
            pal = false;
            break;
        }

        left++;
        right--;
    }

    if (pal == true) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}