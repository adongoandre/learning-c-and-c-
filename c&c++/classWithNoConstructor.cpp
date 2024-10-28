#include<iostream>
 using namespace std;

class room
{
//private:
    /* data */
public:
    double lenght;
    double breadth;
    double height;

    double calculatedArea(){
        return lenght * breadth;
    };
    double calculatedvolume(){
        return lenght * breadth * height;
    }
};

int main(){
    room r;
    r.lenght=42.5;
    r.breadth=30.8;
    r.height=19.2;

    cout<<"the are of the room is "<<r.calculatedArea();
    cout<<"\nthe volume of the room is "<<r.calculatedvolume();
    
}