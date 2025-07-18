#include<iostream>
using namespace std;
int main (){

    int cp,sp;

    cout<<"Enter The Cost Price : ";
    cin>>cp;

    cout<<"Eanter The Selling Price : ";
    cin>>sp;

    if(sp>cp){
        cout<<"Profit :"<<sp-cp;
    }

    else{
        cout<<"Loss :"<<cp-sp;
    }

        if(cp==sp){
        cout<<"No Profit, No Loss : ";
    }
}