//WAP to calculate the volume of cube,sphere,cone using inline functions//
#include<iostream>
using namespace std;

class volume
{   public:
     float cube_vol(int r)
    {
        return (r*r*r);
    }

     float sphere_vol(int r)
    {
        return ((4/3)*3.14*r*r*r);
    }

     float cone_vol(int r,int h)
    {
        return (3.14*r*r*h)/3;
    }
};

int main()
{
    volume v;
        int x,y;
        cout<<"Enter the radius ";
        cin>>x;
        cout<<"Enter the height for cone";
        cin>>y;
    cout<<v.cone_vol(x,y)<<"\n";
    cout<<v.cube_vol(x)<<"\n";
    cout<<v.sphere_vol(x)<<"\n";
}
