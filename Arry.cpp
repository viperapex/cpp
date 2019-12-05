//WAP to find the sum of elements of 1D array entered by the user//
#include<iostream>
using namespace std;

class AR
{
    public: int arr[10],sum=0,i;
    public:void getData();
           void sumData();

};

void AR::getData()
{
    cout<<"Enter any 5 numbers";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
}

void AR::sumData()
{
    for(i=0;i<5;i++)
        sum+=arr[i];
    {

    }

    cout<<"The sum is"<<sum;
}

int main()
{

    AR a1;
    a1.getData();
    a1.sumData();
}
