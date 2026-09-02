#include <iostream>
using namespace std;

// Array

int main(){
    
    int arr[5];

    cout << "Enter the values to store in array: ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[4];
    
    return 0;
}

// 2D Array

int main(){
    int arr [3][5];
    arr[1][3] = 78;
    cout << arr[1][3];

    return 0;
}