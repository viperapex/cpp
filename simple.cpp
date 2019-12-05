#include<iostream>
using namespace std;

class A
{
    public:int x,y,z;
    public:void getData();
           void proData();
           void showData();
};

void A::getData()
{
    cout<<"Enter first value :";cin>>x;
    cout<<"Enter value value :";cin>>y;
}

void A::proData()
{
    z=x+y;
}

void A::showData()
{
    cout<<"output :"<<z;
}

int main()
{
    A a;
    a.getData();
    a.proData();
    a.showData();
}
