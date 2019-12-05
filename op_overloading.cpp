#include<iostream>
using namespace std;

class FD
{
    public:int a,b;
           void getData(int ,int);
           void display();
           FD operator +(FD &)
};

void FD::getData(int A,int B)
{
    a=A;
    b=B;
}

void FD::display()
{
    cout<<"val"<<a<<b<<endl;
}

FD FD::operator+ (FD &c)
{
    FD temp;
    temp.a = a+c.a;
    temp.b = b+c.b;
}

int main()
{
    FD a,b
}
