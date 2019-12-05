#include<iostream>
using namespace std;

class square
{
    public: int s,area,peri;
    public: void proData();

    inline void getData()
    {
        cout<<"Enter a side";
        cin>>s;
    }
};



void square::proData()
{
    area=s*s;
    peri=s*4;
}


int main()
{
square s;
s.proData();
}
