#include<iostream>
using namespace std;
int main() {
    int mark;
    cin >> mark;

    if(mark > 33) {          // Checks if the mark is greater than 33
        if(mark > 80) {      // If mark is above 80
            cout << "carefully";  
        } else {
            cout << "pass";      
        }
    }

    return 0;
}