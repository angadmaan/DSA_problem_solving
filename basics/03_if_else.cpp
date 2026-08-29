#include <iostream>
using namespace std;


// There are three programs in this file (comment out others when running a specific program).


// Program 1

int main(){
    int age;

    cout << "Enter your age: ";
    cin >> age;
    if(age >= 18){
        cout << "You are adult";
    }
    else{
        cout << "You are not an adult";
    }

    return 0;
}

// Program 2

int main(){
    int marks;
    cout << "Enter Your Marks: ";
    cin >> marks;
    
    if (marks < 0 || marks > 100) {
        cout << "Invalid marks" << endl;
    }
    else if(marks <= 25){
        cout << "F" << endl;
    }
    else if(marks <= 44){
        cout << "E" << endl;
    }
    else if(marks <= 49){
        cout << "D" << endl;
    }
    else if(marks <= 59){
        cout << "C" << endl;
    }
    else if(marks <= 79){
        cout << "B" << endl;
    }
    else if(marks <= 100){
        cout << "A" << endl;
    }

    return 0;
}

// Program 3

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age < 18){
        cout << "Not eligible for job" << endl;
    }
    else if(age <= 57){
        cout << "You are eligible for job";
        if(age >= 55){
            cout << ", retirement soon" << endl;
        }
    }
    else{
        cout << "Retirement time" << endl;
    }
    


    return 0;
}
