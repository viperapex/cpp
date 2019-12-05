#include<iostream>
using namespace std;

class complex
{
    int real,imag;
    public:void readData();
           void addData(complex,complex);
};
void complex::readData()
{
    cout<<"\nEnter the value of real and Imaginary no:";
    cin>>real>>imag;
}
void complex::addData(complex c1,complex c2)
{
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;
    cout<<"\nNumber is:"<<real<<"+"<<imag<<"i";
}
int main()
{
    complex c1,c2,c3;
    c1.readData();
    c2.readData();
    c3.addData(c1,c2);
}
