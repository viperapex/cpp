#include<iostream>
using namespace std;

class A
{
    protected:int x,y;
    public:void getData();
    public:void showData();
};

class B:public A
{
    public:void getData()
    {
        cout<<"Enter first no :";cin>>x;
        cout<<"Enter second no :";cin>>y;
    };
};
class C:public A

{
    public: void showData()
    {
        int z=x*y;
        cout<<"multiplication is  :"<<z;
    }
};

int main()
{
    B b;
    C c;
    b.getData();
    c.showData();
}
