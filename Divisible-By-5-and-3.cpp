
                //////  && CONDITIONS USE
                //////  Take Positive integer input tell if it is divisible by 5 and 3.


#include<iostream>
using namespace std;
int main (){

int n;
cout<<"Enter The Number : ";
cin>>n;

if( n%5==0 && n%3==0){                //  ( and, &&) this condition active , when both condition true.
    cout<<"Divisible By 5 And 3 : ";
}

else cout<<"Not Divisible By 5 And 3 :";

}




                //////  || CONDITIONS USE
                //////  Take Positive integer input tell if it is divisible by 5 OR 3.


#include<iostream>
using namespace std;
int main (){

int n;
cout<<"Enter The Number : ";
cin>>n;

if( n%5==0 || n%3==0){                //  ( OR, ||) this condition active , when both condition true.
cout<<"Divisible By 5 And 3 : ";
}

else cout<<"Not Divisible By 5 And 3 :";

}