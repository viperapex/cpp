#include<iostream>
using namespace std;

class A
{
    public:int x,y,z;
    public:void getData()
    {
        cout<<"Enter first value :";cin>>x;
        cout<<"Enter value value :";cin>>y;
    };

    void proData();

    void showData();
};

class B:public A
{
    public:void proData()
    {
            z=x+y;
    };
};


class C:public B
{
    public:void showData()
    {
        cout<<"output :"<<z;
    }

};

int main()
{
    C c;
    c.getData();
    c.proData();
    c.showData();
}

