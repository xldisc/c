#include<iostream>
using namespace std;
int main(){
int a=10,b=15,c=1;
if(a>=b && a>=c){
    cout<<"a is maximum";
}
else if(b>=a && b>=c){
    cout<<"b is maximum";
}
else{
    cout<<"c is maximum";
}
    return 0;
}