#include <iostream>
using namespace std;

// Function to find the maximum and minimum of three integers
void findMaxMin(int &a, int &b, int &c, int &max) {

   if (a > b && a > c){
    max = a;
   }
   else if (b > a && b > c){
    max = b;
   }
   else{
    max = c;
   }
   
}

int main() {
    int num1, num2, num3;
    int max, min;

    // Read three integer values from the user
    cin >> num1 >> num2 >> num3;

    // Call the function to find the maximum and minimum
    findMaxMin(num1, num2, num3, max);

    // Print the maximum and minimum values
    // cout << min << endl;
    cout << max << endl;

    return 0;
}
