//Nested Class Use in this program
//!Syntex
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public:
    class B //Member variable of class A
    {
        int a,b;
        public:
        void input() //Member function of class B
        {
            cout<<"insert two number=";
            cin>>a>>b;
        }
        void show()
        {
            cout<<a<<" "<<b;
        }
    };
};
int main()
{
    A::B obj;
    obj.input();
    obj.show();
}