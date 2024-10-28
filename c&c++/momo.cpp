#include<iostream>

using namespace std;

int main(){
    cout<<"1. Send Money"<<endl;
    cout<<"2. Withdraw Cash"<<endl;
    cout<<"3. Buy Airtime or Data"<<endl;
    cout<<"4. Make Payments"<<endl;
    cout<<"5. Financial Services"<<endl;
    cout<<"6. My Account"<<endl;
    cout<<"7. Self Services"<<endl;

    int option;
    cin>>option;

    switch (option)
    {
    case 1:
        cout<<"You can send money";
        break;
    case 2:
        cout<<"You can withdraw cash";
        break;
    case 3:
        cout<<"You can buy airtime or data";
        break;
    case 4:
        cout<<"You can make payments";
        break;
    case 5:
        cout<<"You can check financial services";
        break;
    case 6:
        cout<<"You can view your account";
        break;
    case 7:
        cout<<"You can acess self services";
        break;
    
    default:
    cout<<"Invalid input";
        break;
    }
}