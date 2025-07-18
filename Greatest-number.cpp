#include<iostream>
using namespace std;
int main (){

    int a,b,c;
    cout<<"Enter The 1st Number : ";
    cin>>a;

    cout<<"Enter The 2nd Number : ";
    cin>>b;

    cout<<"Enter The 3rd Number : ";
    cin>>c;

    if( a>b and a>c){
        cout<<a<<"Is Greatest Number ";
    }

        if( b>c and b>a){
        cout<<b<<"Is Greatest Number ";
    }

        if( c>a and c>b){
        cout<<c<<"Is Greatest Number ";
    }

}