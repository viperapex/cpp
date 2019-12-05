#include<iostream>
using namespace std;

class time
{
    int hours,minutes;
    public:void getTime(int,int);
           void addTime(time,time);
           void displayTime();
};
void time::getTime(int h;int m)
{
    hours=h;
    minutes=m;
}
void time::addTime(time t1,time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}
void time::displayTime()
{
    cout<<"Hours ="<<hours;
    cout<<"Minutes ="<<minutes;
}
int main()
{
    time t1,t2,t3;
    t1.gettime(5,50);
    t2.gettime(5,50);
    t3.gettime(5,50);
    cout<<"\nFor object T1";
    t1.displayTime();
    cout<<"\nFor object T2";
    t2.displayTime();
    cout<<"\nFor object T3";
    t3.displayTime();
}
