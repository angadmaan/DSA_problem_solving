#include <iostream>
using namespace std;

// Short case program 1 

// 1 for Monday
// 2 for Tuesday (so on)

int main(){
int day;
 
cout << "Enter your Number: ";
cin >> day;

switch (day)
{
case 1:
    cout << "Monday";
    break;
case 2:
    cout << "Tuesday";
    break;
case 3:
    cout << "Wedenesday";
    break;
case 4:
    cout << "Thursday";
    break;
case 5:
    cout << "Friday";
    break;
case 6:
    cout << "Saturday";
    break;
case 7:
    cout << "Sunday";
    break;

default:
    cout << "Invalid Choice";
    break;
}
}