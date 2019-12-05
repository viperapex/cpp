#include<iostream>
using namespace std;

class over
{
    int a,b;
    public:void getData(int ,int);
            void display();
            void operator --();
};

void over::getData(int x,int y)
{
    a=x;
    b=y;
}

void over::display()
{
    cout<<"\na"<<a<<"\nb"<<b;
}

void over::operator --()
{
    a=--a;
    b=--b;
}

int main()
{
    over o;
    o.getData(10,20);
    o.display();
    --o;
    o.display();
}
