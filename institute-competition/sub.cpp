#include <iostream>
using namespace std;

int main() {
    long long a, b;

    while (cin >> a >> b) {
        long long result;

        if (a > b) {
            result = a - b;
        }

        else {
            result = b - a;
        }
        
        cout << result << endl;
    }

    return 0;
}
