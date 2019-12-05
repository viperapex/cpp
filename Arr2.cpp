#include<iostream>
using namespace std;

class AR
{
    public: int arry[10],sum=0,i;
    public:void getData();
           void sumData();
};

void AR::getData()
{
    cout<<"Enter five numbers : \n";
    for(i=0;i<5;i++)
    {
        cin>>arry[i];
    }
}

void AR::sumData()
{
    for(i=0;i<5;i++)
    {
        sum+=arry[i];
    }
    cout<<"sum is :"<<sum;
}

int main()
{
    AR a;
    a.getData();
    a.sumData();
}
