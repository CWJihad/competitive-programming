#include <iostream>
using namespace std;

int main() {

    int w, result;
    cin >> w;

    if ( w % 2 == 0)
    {
        result = w/2;

        if (result%2 == 0)
        {
            cout << "YES";
        }

        else
        {
            cout << "NO";
        }
        
    }

    return 0;
    
}