#include<iostream>
using namespace std;

class time
{
    int hrs,mins;
    public: time(int h,int m)
    {
        hrs = h;
        mins = m;

        int tot_min = hrs*60+mins;
        return tot_min;
    }
    void display()
    {
        cout<<"Hours ="<<hrs;
        cout<<"minutes ="<<mins;
    }
};

class minutes
{
    int m;
    public: minutes()
    {
        m = 0;
    }
        void operator = (time t)
        {
            m = t.getminutes();
        }
    void display()
    {
        cout <<"Minutes"<<m;
    }
};

int main()
{
    time t1(2,30);
    t1.display();
    minutes m1;
    m1.display()
    m1 = t1;
    m1.display()
}
