#include<iostream>
using namespace std;

class A
{
    public: int x,y;
    public: void getData();
            void proData();


};

void A::getData()
{
  cout<<"Enter data here: ";
  cin>>x;
  cout<<"Enter data here: ";
  cin>>y;
};

void A::proData()
{
    x+=y;
    cout<<"Addition is :"<<x;
}

int main()
{
    A a;
    a.getData();
    a.proData();
}
