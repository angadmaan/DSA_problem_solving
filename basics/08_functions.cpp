#include <bits/stdc++.h>
using namespace std;

// 1st Program

void printName (string name){
    cout << "Hey " << name << "!" << endl;
}

// 2nd Program

void sum(int num1, int num2){
    int num3 = num1 + num2;
    cout << num3;
}

// 3rd Program

void maxx(int num){
    cout << endl;
    cout << num << endl;
    num +=5;
    cout << num << endl;
    num +=5;
    cout << num << endl;
}

// 4th Program 

void minn(string &s){   // & is used to pass the reference of the variable s to the function minn. So, the original value of s will be changed.
    s[0] = 'A';
    cout << s << endl;
}

int main() {

    // // 1st Program

    string name;
    cout << "Enter your Name: ";
    cin >> name;
    printName(name);

    string name2;
    cout << "Enter your Name: ";
    cin >> name2;
    printName(name2);

    // 2nd Program

    int num1, num2; 
    cout << "Enter the Number 1: ";
    cin >> num1;
    cout << "Enter the Number 2: ";
    cin >> num2;
    cout << "The sum of Number 1 and Number 2 is: ";
    sum(num1, num2); 

    // 3rd Program

    int num = 10;
    maxx(10);
    cout << num << endl;    // Output will be 10 because we are passing the value of num to the function and not the reference of num. So, the original value of num will not be changed.

    // 4th Program 

    string s = "xngad";
    minn(s);
    cout << s << endl;      // Output will be Angad because we are passing the reference of s to the function and not the value of s. So, the original value of s will be changed.

    return 0;
}







