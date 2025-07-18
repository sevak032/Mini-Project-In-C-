#include<iostream>
using namespace std;
int main (){
int n;
cout<<"Enter The Number : ";
cin>>n;

    if( (n%3==0 || n%5==0) && n%15!=0){
        cout<<"Valide";
    }
}