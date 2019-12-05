//WAP to enter two variables into two different classes and find the greater//
#include<iostream>
using namespace std;
class class2;
class class1
{
    private:int x;
    public:void getData()
    {
        cout<<"Enter First no :";
        cin>>x;
    }
    friend void compare(class1,class2);
};

class class2
{
    private:int x;
    public:void getData()
    {
        cout<<"Enter second no :";
        cin>>x;
    }
    friend void compare(class1,class2);
};

void compare(class1 q,class2 r)
{
    if(q.x > r.x)
    {
        cout<<q.x<<" is larger";
    }
    else
    {
        cout<<r.x<<" is larger";
    }
}

int main()
{
    class1 a;
    class2 b;
    a.getData();
    b.getData();
    compare(a,b);
}
