#include<iostream>
using namespace std;

float grossSalery(int hours, int rate){
    float result = ( hours * rate);
    return result;
}

float tax(float t, float g){
    return t*0.01*g;
}

float netSalary(int grossv, int taxv){
    return grossv - taxv;
}

int main(){
    int a, b, c;
    cout<<"enter the number of hours you work ";cin>>a;
    cout<<"\nenter your hourly rate e.g($50 per hour) ";cin>>b;
    cout<<"\nenter your tax rate ";cin>>c;

    float myGross = grossSalery(a,b);
    float myTax = tax(c,myGross);
    float myNet = netSalary(myGross, myTax);

    cout<<"\nyour gross salary is $"<<myGross;
    cout<<"\nyour tax amount is $"<<myTax;
    cout<<"\nyour take home salary is $"<<myNet;

    return 0;
}