#include<iostream>

using namespace std;

class car{
    private:
    int x = 10, y=20 ;
    public:
    friend void calc();
    void disp(){
        cout<<x+10<<endl;
    }
}p;

void calc(){
    cout<<p.y;
}
int main(){
    p.disp();
    calc();
    return 0;
}