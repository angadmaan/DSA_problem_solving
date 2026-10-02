#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s = "Angad";
    cout << s[0];
    cout << s[1];
    cout << s[2];
    cout << s[3];
    cout << s[4] << endl;
    int len = s.size();
    cout << "The length of string is " << len;
    

    return 0;
}

