#include<iostream>
using namespace std;
int main(){
int totalrow;
cin>>totalrow;
for (int row =1; row <=totalrow; row++)
{
    for (int col = 1; col <=totalrow-row; col++)
    {
        cout<<" ";
    }
    for(int col=1;col<=row;col++){
        cout<<"*";
    }
    cout<<endl;
    
}

return 0;
}