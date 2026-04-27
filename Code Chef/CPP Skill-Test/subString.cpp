#include <iostream>
using namespace std;

int main() {
    string s = "Hello, Codechef";
    int n = 8;

    string sub = "";   // empty string to store result

    // copy first n characters manually
    for (int i = 0; i < n; i++) {
        sub = sub + s[i];   // add character to sub
    }

    cout << sub;

    return 0;
}