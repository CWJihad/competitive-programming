#include <bits/stdc++.h>
using namespace std;

int main() {
    string user;    
    cin >> user;

    string num = "123456789";

    int digit = 0;
    int sum = 0;
    
    for (int i = 0; i < user.length(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (user[i] == num[j])
            {
                digit = user[i] - '0';
                sum += digit;
            }
        }   
    }

    cout << sum;
    
    
}