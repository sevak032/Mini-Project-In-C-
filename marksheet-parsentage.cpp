#include<iostream>
using namespace std;
int main (){
    int n;

    cout<<"Enter Marks : ";
    cin>>n;

    if(n>80 and n<=100){
        cout<<"Very Good ";
    }


        else if(n>60 and n<=80){
        cout<<"Good ";
    }


       else if(n>40 and n<=60){
        cout<<"Average ";
    }


        else{
        cout<<"Fail ";
    }

}