#include <bits/stdc++.h>
using namespace std;

int calculatePower(int base, int exponent) {
    // Complete the function
    int pw = 1;
    for (int i = 0; i < exponent; i++) {
        pw = pw*base;
    }
    return pw;
}

int main() {
    int base, exponent;
    cin >> base >> exponent;
    int result = calculatePower(base, exponent);
    cout << result;

    return 0;
}
/*
Write a function named calculatePower that takes two integer, base and exponent respectively, and returns the result of raising base to the power of exponent.

Sample 1:
Input
2 3
Output
8
Explanation:
2^3 = 8
*/