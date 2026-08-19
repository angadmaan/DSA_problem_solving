#include <iostream>
using namespace std;

// int main(){
//     int age;

//     cout << "Enter your age: ";
//     cin >> age;
//     if(age >= 18){
//         cout << "You are adult";
//     }
//     else{
//         cout << "You are not an adult";
//     }

//     return 0;
// }


int main(){
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;
    
    if (marks < 0 && marks > 100) {
        cout << "Invalid marks" << endl;
    }
    if(marks <= 25){
        cout << "F" << endl;
    }
    else if(marks <= 44 && marks >= 25){
        cout << "E" << endl;
    }
    else if(marks <= 49 && marks >= 45){
        cout << "D" << endl;
    }
    else if(marks >= 50 && marks <= 59){
        cout << "C" << endl;
    }
    else if(marks <= 79 && marks >= 60){
        cout << "B" << endl;
    }
    else if(marks >= 80 && marks <= 100){
        cout << "A" << endl;
    }

    return 0;
}