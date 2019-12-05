#include<iostream>
using namespace std;

class base1
{
    protected: int a;
        void getData(int x)
        {
            a =x;
        }
};

class base2
{
    protected: int b;
    void getData2(int x)
    {
        b=x;
    }
};

class derived :public base1: public base2;
{
    public: void display()
        {
            cout<<"\n"<<a;
            cout<<"\n"<<b;
            cout<<"\n"<<a+b;
        };
};

int main()
{
    derived d;
    d.getData(10)
    d.getData(20)
    d.display();
}
