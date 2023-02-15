#include <iostream>
#include <math.h>
using namespace std;

class A{
    public:
    void func(double a){
        cout<<0;
    }
    void func(int a){
        cout<<1;
    }
};

int main(){
    A a;
    a.func(2);
    return 0;
}