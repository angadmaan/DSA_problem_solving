#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i = i + 1){      // The value of i increases by 1 after 1 iteration.
        cout << "Angad Singh Maan" << endl;
    }
    return 0;
}

int main() {
    for (int i = 5; i > 0; i = i - 1){       // The value of i decreases by 1 after 1 iteration.
        cout << i << endl;
    }
    return 0;
}


// Same peice of code with while loop


int main(){
    int i = 1;      // Intialized outside the loop
    while(i <= 10){     // Condition inside the while loop 
        cout << i << endl;

        i = i + 1;      // Operation performed in the last step of while loop
    }
    return 0;
}