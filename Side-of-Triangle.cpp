#include<iostream>
using namespace std;
int main (){

    int a,b,c;
    cout<<"Enter The 1st Side : ";
    cin>>a;

    cout<<"Enter The 2nd Side : ";
    cin>>b;

    cout<<"Enter The 3rd Side : ";
    cin>>c;

    if( (a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"Triangle is valid :";
    }

    else cout<<"Triangle is not valid :";
}