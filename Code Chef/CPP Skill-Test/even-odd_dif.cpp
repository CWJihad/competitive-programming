#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, even_sum = 0, odd_sum = 0, diff;
    cin >> n;
    int arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i]%2 == 0){
            even_sum = even_sum + arr[i];
        }
        else{
            odd_sum = odd_sum + arr[i];
        }
    }

    if(even_sum > odd_sum){
        diff = even_sum - odd_sum;
        cout << diff;
    }

    else {
        diff = odd_sum - even_sum;
        cout << diff;
    }

    
    
}