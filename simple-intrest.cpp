#include<iostream>
using namespace std;
int main (){

float p;
cout<< "Enter The Amoun :" ;
cin>>p;


float r;
cout<< "Enter The Rate : " ;
cin>>r;


float t;
cout<<"Enter The time (in month) : ";
cin>>t;


float a = p+p*r*t/100;


cout<<"Total Amount is : "<<a;


    return 0;
}