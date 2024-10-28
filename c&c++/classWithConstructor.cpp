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

    room(double x, double y, double z): lenght(x), breadth(y), height(z){}

    double calculatedArea(){
        return lenght * breadth;
    };
    double calculatedvolume(){
        return lenght * breadth * height;
    }
};

int main(){
    room r(42.5,30.8,19.2 );

    cout<<"the are of the room is "<<r.calculatedArea();
    cout<<"\nthe volume of the room is "<<r.calculatedvolume();
    
}