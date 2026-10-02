/*
* * * * * 
* * * * 
* * * 
* * 
* 
*/

#include <bits/stdc++.h>
using namespace std;

void pattern_5 (int n){

     for (int i = 1; i <= n; i++){

        for(int j = 0; j < n-i+1; j++){

            cout << "* ";
        }

        cout << endl;
    
    }
}

int main() {

    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    pattern_5(n);
    return 0;
}