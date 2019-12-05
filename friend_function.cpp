#include<iostream>
using namespace std;
class B;

class A
{
    private: int x;
    public:void getData()
    {
        cout<<"Enter first value :";cin>>x;
    };
    friend void compare(A,B);
};

class B
{
    private: int x;
    public:void getData()
    {
        cout<<"Enter second value :";cin>>x;
    };
    friend void compare(A,B);
};

void compare(A q,B r)
{
    if(r.x>q.x)
    {
        cout<<r.x<<" Is greater";
    }
    else
    {
        cout<<q.x<<" Is greater";
    }
}

int main()
{
 A a;
 B b;
 a.getData();
 b.getData();
 compare(a,b);
}
