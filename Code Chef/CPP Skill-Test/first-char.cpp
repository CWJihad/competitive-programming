#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    cout << "Length: " << s.length() << endl;

    // Find and print the first non-space character
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != ' ') {
            cout << "First Character: " << s[i] << endl;
            return 0;  // Exit after finding the first non-space character
        }
    }

    return 0;
}