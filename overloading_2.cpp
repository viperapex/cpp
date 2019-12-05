#include<iostream>
using namespace std;
class abc
{
    int a,b,ar;
    public: void get(int,int);
            void display();
            void operator +();
            void area();

};
void abc:: get(int x,int y)
{
    a=x;
    b=y;
}
void abc::operator +()
{
    a=5+a;
    b=5+b;
}
void abc::area()
{
    int ar=a*b;
    cout<<"\narea= "<<ar;
}
void abc::display()
{
    cout<<"\nx="<<a<<" y="<<b;
}
int main()
{
    abc s1;
    s1.get(10,20);
    s1.display();
    +s1;
    s1.display();
    s1.area();
}
