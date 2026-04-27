#include <iostream>
using namespace std;

int multiple(int a, int b) {
    return a * b;
}

int total(int x, int y) {
    return x + y;
}

int abs_diff(int multiple,int total) {
    if(multiple > total){
        
    return (multiple - total);
    }
    else {
        return (total - multiple);
    }

}

int main() {
    int A, B;
    cin >> A >> B;
    
    int D = multiple(A, B);
    int C = total(A, B);
    int E = abs_diff(C, D);
    
    cout << E << endl;
    
    
}