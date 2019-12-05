#include<iostream>
using namespace std;


class Students
{
    public: int regid,age;
            char name[25];

    public:void getData()
    {
        cout<<"Enter name :";cin>>name;
        cout<<"Enter age :";cin>>age;
        cout<<"Enter Reg id :";cin>>regid;
    };

    public:void putData()
    {

        cout<<"\n"<<regid<<"\n"<<name<<"\n"<<age<<"\n";
    }
};

int main()
{
    int i;
    Students S[3];

    for (i=0;i<3;i++)
    {
        cout<<"Enter details of "<<i+1<<"Student";
        S[i].getData();
    }

    cout<<"Details of Student";
    for(i=0;i<3;i++)
    S[i].putData();
}
