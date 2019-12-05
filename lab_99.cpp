#include<iostream>
using namespace std;
class Students
{
    int Id;
    char Name[25];
    int Age;
    long Fees;

    public:void GetData()
        {
            cout<<"\n\tEnter Students Id : ";
            cin>>Id;

            cout<<"\n\tEnter Students Name : ";
            cin>>Name;

            cout<<"\n\tEnter Students Age : ";
            cin>>Age;

            cout<<"\n\tEnter Students Fees : ";
            cin>>Fees;
        }

         void Students::PutData()
        {
            cout<<"\n"<<Id<<"\t"<<Name<<"\t"<<Age<<"\t"<<Fees;
        }

       };

       void main()

       {

              int i;

              Students E[3];

              for(i=0;i<3;i++)
              {
                    cout<<"\nEnter details of "<<i+1<<" Students";
                    E[i].GetData();
              }

              cout<<"\nDetails of Studentss";
              for(i=0;i<3;i++)
              E[i].PutData();

       }


   Output :

              Enter details of 1 Students
                        Enter Students Id : 101
                        Enter Students Name : Suresh
                        Enter Students Age : 29
                        Enter Students Salary : 45000

              Enter details of 2 Students
                        Enter Students Id : 102
                        Enter Students Name : Mukesh
                        Enter Students Age : 31
                        Enter Students Salary : 51000

              Enter details of 3 Students
                        Enter Students Id : 103
                        Enter Students Name : Ramesh
                        Enter Students Age : 28
                        Enter Students Salary : 47000

              Details of Studentss
                        101       Suresh      29      45000
                        102       Mukesh      31      51000
                        103       Ramesh      28      47000
}
