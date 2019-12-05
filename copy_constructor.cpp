#include<iostream>//IN COPY CONSTRUCTOR PASSING AN ARGUMENT BY VALUE IS NOT POSSIBLE;
using namespace std;

class CPY
{
    private:int x;

    public:CPY(int a)//parameterized constructor to initialize x
    {
        x=a;
    };
    CPY(CPY &b) //copy constructor with reference object argument
    {
        x=b.x;
    }
    int display()
    {
        return x;
    }
};
 int main()
 {
    CPY c1(2);    //initializing the data members of object 'c' implicitly
 	CPY c2(c1);   //copy constructor called
 	CPY c3 = c1;
 	CPY c4 = c2;
 	cout << "CPY c1 = " << c1.display() << endl;
 	cout << "CPY c2 = " << c2.display() << endl;
 	cout << "CPY c3 = " << c3.display() << endl;
 	cout << "CPY c4 = " << c4.display() << endl;
 	return 0;
 }
