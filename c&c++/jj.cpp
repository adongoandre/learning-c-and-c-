#include <iostream>
 using namespace std;

 class add{
    public:
    void greatest(int x, int y){
        if (x > y) {
            cout<<x<<" is the greatest";
        }
        if (y > x) {
            cout<<y<<" is the greatest";
        }
    }
 }a;

 int main(){
    int x, y;
    cin>>x>>y;
    a.greatest(x,y);
    return 0;
 }