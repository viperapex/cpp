#include<iostream>
using namespace std;

class A
{
    public:int l,b,perimeter,area;
};

class B:public A
{
    public:void getData()
    {
        cout<<"Enter length here :";cin>>l;
        cout<<"Enter breadth here :";cin>>b;
    }
};

class C:public B
{
    public:void proData()
    {
        area=l*b;
        perimeter=2*(l+b);
    }
};

class D:public C
{
    public:void showData()
    {
        cout<<"Area is :"<<area<<"\n";
        cout<<"Perimeter is :"<<perimeter;
    }
};

int main()
{
    D d;
    d.getData();
    d.proData();
    d.showData();
}
