#include<iostream>
using namespace std;

class time
{
    int hrs,mins;
    public: getData()
    {
        cout<<"Enter hours :";
        cin>>hrs;
        cout<<"Enter mins :";
        cin>>mins;
    }
    operator int()
    {
        int m= hrs & 60 + mins;
    }
};

int main()
{
    time t;
    t.getData();
    int x;
    x = t;
    cout<<"x="<<x;
}
