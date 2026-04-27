#include <iostream>
using namespace std;

void calculateFactorial(int *numPtr) {
   // Complete the function
   int num = *numPtr;
   int fac = num;
   for (int i = 2; i < num; i++) {
    fac = fac * i;
   }
   cout << fac;
   
}

int main() {
    int number;
    cin >> number;

    calculateFactorial(&number); // Pass the address of 'number' to the function

    // cout << number << endl; // 'number' should store factorial of 'number' after function call

    return 0;
}
