#include <iostream>
using namespace std;

class base
{
    public: int x;
        void getData()
        {
            cout<<"Enter the value of x";cin>>x;
        }
};

class derived:public base
{
    private: int y;
    public: void readData()
    {
        cout<<"Enter the value of y";cin>>y;
    };
    void product()
    {
        cout << "Product is: "<<x*y;
    }

};

int main()
{
    derived d;
    d.getData();
    d.readData();
    d.product();
    return 0;
}
