#include <bits/stdc++.h>

using namespace std;

void sum_difference(int *value1, int *value2) {
   // Complete the function
   int sum = *value1 + *value2;
   int diff = *value1 - *value2;
   cout << sum << endl;
   cout << abs(diff) << endl;
   
}

int main() {
    int value1, value2;
    // take two inputs
    cin >> value1 >> value2;
    // call the function by reference
    sum_difference(&value1, &value2);
    
    // Output the results
   
    
    return 0;
}
