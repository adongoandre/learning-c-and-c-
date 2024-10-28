#include<iostream>

using namespace std;

class car{
    private:
    int x = 10, y=20 ;
    public:
    void calc();
    void disp(){
        cout<<x+10<<endl;
    }
}p;

void car::calc(){
    cout<<p.y;
}
int main(){
    p.disp();
    p.calc();
    return 0;
}