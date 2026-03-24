#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int first = 0;
    int second = 1;
    int current = 0;

    for(int i = 1; i < n; i++){
        current = first + second;
        first = second;
        second = current;
    }

    cout << first;
    return 0;
}