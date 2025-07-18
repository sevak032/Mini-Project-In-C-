#include<iostream>
using namespace std;
int main(){

     int a,b,c;
    cout<<"Enter The Age Of Ajay : ";
    cin>>a;

    cout<<"Enter The Age Of Ram : ";
    cin>>b;

    cout<<"Enter The Age Of Shayam : ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<" Ajay Is Youngest Boy";
        }

        else{
            cout<<" Shayam Is youngest Bpoy";
        }
    }


else {
    if(b>c){
        cout<<" Ram Is Youngest Boy";
    }

    else{ 
        cout<<" Shayam Is Yiungest boY";
    }
}
}