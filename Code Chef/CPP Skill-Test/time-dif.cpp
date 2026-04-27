/*
You are given two 24-hour format times as integers:
time1 = 1430 (2:30 PM)
time2 = 1615 (4:15 PM)

You need to calculate the difference between time2 and time1 in minutes using only operators.
Print the difference to the console.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int time1 = 1430;
    int time2 = 1615;

    int minutes1 = (time1 / 100) * 60 + (time1 % 100);
    int minutes2 = (time2 / 100) * 60 + (time2 % 100);
    int difference = minutes2 - minutes1;

    cout << difference << endl; // Output: 105
    return 0;
}