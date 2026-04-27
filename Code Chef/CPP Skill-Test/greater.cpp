#include <iostream>
using namespace std;

/*
follow the conditions in the below
testCase should be between 1<= testCase <=100
you should do a, b average and check is greater than c or not
output should be "YES" or "NOT"
*/


int main() {
    int testCase, a, b, c; 

    cin >> testCase;

    if (testCase >= 1 && testCase <= 100)
    {
        for (int i = 0; i < testCase; i++)
        {
            cin >> a >> b >> c;
            double avg = (a+b)/2.0;

            if (avg > c)
            {
                cout << "YES" << endl;
            }

            else
            {
                cout << "NO" << endl;
            }
            
            
            
        }
        
    }
    


    
}