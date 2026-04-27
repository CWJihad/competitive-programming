#include <iostream>
#include <set>
using namespace std;

int main() {
    string username;
    cin >> username;

    set<char> unique_letters;

    for (char c : username) {
        unique_letters.insert(c);
    }

    if (unique_letters.size() % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
