#include <iostream>
using namespace std;

int main(){
    // int for integer values in small range

    int a = 10;

    // long for integer values in medium range

    long b = 1000;

    // long long for integer values in large range 

    long long c = 100000;

    // float for decimal values in a certain range (can also store integer)

    float d = 13.3;
    
    // double for decimal values in large range (can also store integer)

    double e = 3.4592843;

    // string for getting a string into an input or getting an output as string 

    cout << a << b << c << d << e;

    string s1 = "angad";

    cout << s1;

    // but if i enter angad singh maan it can't print full string than we use getline
    
    // getline to print entire string or take input of an entire string to put it into a variable 

    string name;

    // lets say i enter "angad singh maan"

    // without getline it will just print "angad"

    // with getline it will print "angad singh maan"

    cout << "Enter your name";

    getline(cin, name);

    cout << name;


    // char is used to store a single character 

    // string can also be used for the same work but it takes much more space than char

    char alphabet = a;

    cout << alphabet;

    return 0;
}