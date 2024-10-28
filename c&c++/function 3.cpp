#include<iostream>
using namespace std;

void multiply(int x, int y);
void addition(int x, int y);
void subtraction(int x, int y);
void division(int x, int y);
void modulo(int x, int y);

    

int main(){
    int a;
    int b;
    cout<<"enter 2 numbers for  "<<endl;
    cin>>a>>b;
    cout<<"______________________________________________________________________________________________"<<endl;
    multiply(a,b);
    addition(a,b);
    subtraction(a,b);
    division(a,b);
    modulo(a,b);

    return 0;
}

void multiply(int x, int y){
    
    cout<<x * y<<endl;
}
void addition(int x, int y){

    cout<<x + y<<endl;
}
void subtraction(int x, int y){

    cout<<x - y<<endl;
}
void division(int x, int y){

    cout<<x / y<<endl;
}
void modulo(int x, int y){

    cout<<x % y<<endl;
}