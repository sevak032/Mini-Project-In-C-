#include<iostream>
using namespace std;
int main (){

    int num;
    cout<<"Kis Number Ka Table Chahgiye : ";
    cin>>num;

    int range = 10;

    cout<<"Table Of : "<<num<<endl;

    for( int i=1; i<=range; i++){
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }


}