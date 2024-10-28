#include<iostream>
using namespace std;

void multiply();
void addition();
void subtraction();
void division();
void modulo();

    int x;
    int y;

int main(){
    
    multiply();
    addition();
    subtraction();
    division();
    modulo();

    return 0;
}

void multiply(){
    cout<<"enter 2 numbers for multiplication "<<endl;
    cin>>x;
    cin>>y;
    cout<<x * y<<endl;
}
void addition(){
    cout<<"enter 2 numbers for addition "<<endl;
    cin>>x;
    cin>>y;
    cout<<x + y<<endl;
}
void subtraction(){
    cout<<"enter 2 numbers for subtraction"<<endl;
    cin>>x;
    cin>>y;
    cout<<x - y<<endl;
}
void division(){
    cout<<"enter 2 numbers for division";
    cin>>x;
    cin>>y;
    cout<<x / y<<endl;
}
void modulo(){
    cout<<"enter 2 numbers ";
    cin>>x;
    cin>>y;
    cout<<x % y<<endl;
}