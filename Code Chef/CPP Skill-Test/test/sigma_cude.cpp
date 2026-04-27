#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cal = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i%2 == 0)
        {
            cal += i*i*i;
        }

        else{
            cal -= i*i*i;
        }
        
    }

    cout << cal;
    
}