 #include <iostream>
using namespace std;

int main() {
	// your code goes here
	    int fac_num;
		cin >> fac_num;
	    int i = 2;
        long long fac = 1;

	do{

	    fac = fac * i;
	    i++;
	    
	    
	    
	}while(i <= fac_num);

    cout << fac;

}