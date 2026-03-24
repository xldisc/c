#include <iostream>
using namespace std;

int main() {
    int mark;
    cin >> mark;

    switch(mark) {  
        case 10:  
        case 9:   
        case 8:  
            cout << "carefully";
            break;
        case 7:   
        case 6:
        case 5:   
        case 4:   
        case 3:   
            if(mark > 3)
                cout << "pass";
            else
                cout << "fail";
            break;
        default:  
            cout << "fail";
    }

    return 0;
}