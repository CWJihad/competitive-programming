#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int bulb;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> bulb;

        if (bulb == 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
