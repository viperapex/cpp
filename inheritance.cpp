#include<iostream>
using namespace std;

class A
{
    int a,b;
    public:void getData();
    public:void display();
};

class B : public A
{
    int c,d;
    public:void get();
           void show();
};

void A::getData()
{
    cin>>a;
    cin>>b;
}

void A::display()
{
    int x = a+b;
    cout<<x;
}

void B::get()
{
    cin>>c;
    cin>>d;
}

void B::show()
{
    int k = c-d;
    cout<<"Output"k;
}

int main()
{
    B b1;
    b1.getData();
    b1.display();
    b1.get();
    b1.show();
}
