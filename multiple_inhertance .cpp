#include<iostream>
using namespace std;

class base
{
    protected: int a;
    public:void getData(int x)
    {
        a=x;
    };
};

class base2
{
    protected: int b;
    public:void getData2(int x)
    {
        b=x;
    };
};

class derived:public base,public base2
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
    d.getData(10);
    d.getData2(20);
    d.display();
}
