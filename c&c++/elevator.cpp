#include<iostream>
#include"MaryClient.h"


using namespace std;


int main(){
    MaryClient voice;

    string text = "read this out";
    string synthesizedSpeech = voice.synthesize(text);

    lable:
    cout<<"1. first floor"<<endl;
    cout<<"2. second floor"<<endl;
    cout<<"3. third floor"<<endl;
    cout<<"4. fourth floor"<<endl;
    cout<<"5. fifth floor"<<endl;

  
    int option;
    cin>>option;

    switch (option)
    {
    case 1:
        cout<<"Welcome to the first floor";
        break;
    case 2:
        cout<<"Welcome to the second floor";
        break;
    case 3:
        cout<<"Welcome to the third floor";
        break;
    case 4:
        cout<<"Welcome to the fourth floor";
        break;
    case 5:
        cout<<"Wellcome to the the fifth floor";
        break;
    default:
        cout<<"Wrong input";
        goto lable;
        break;
    }
}