/*C++ program to demonstrate example of Default Constructor or No argument.*/

#include <iostream>
using namespace std;

//Class declaration.
class Demo
{
    private:int X,Y;
    public:Demo ();
        void    Input();
        void    Display();

};

//Definition of constructor.
Demo:: Demo()
{
    X = 0;
    Y = 0;
}

void Demo:: Input()
{
    cout << "Enter Value of X: "; cin >> X;
    cout << "Enter Value of Y: "; cin >> Y;
}

void Demo:: Display()
{
    cout << endl << "X: " << X;
    cout << endl << "Y: " << Y << endl;
}

int main()
{
    Demo d ; //Ctor autometically call when object is created.

    //Display value of data member.
    cout << endl <<"Method 1: " << endl;
    cout << "Value after initialization : " ;
    d.Display();

    d.Input();
    cout << "Value after User Input : ";
    d.Display();


    //We can also create object like this
    Demo d1 = Demo();

    //Display value of data member.
    cout << endl << "Method 2: " << endl;
    cout << "Value after initialization : ";
    d1.Display();

    return 0;
}
