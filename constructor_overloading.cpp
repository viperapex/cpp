/*.....A program to highlight the concept of constructor overloading.......... */
#include <iostream>
using namespace std;
class ABC
{
     private:
        int x,y;
     public:
        ABC ()       //constructor 1 with no arguments
        {
            x = y = 0;
        }
        ABC(int a)    //constructor 2 with one argument
       {
             x = y = a;
        }
        ABC(int a,int b)    //constructor 3 with two argument
        {
              x = a;
              y = b;
        }
        void display()
        {
              cout << "x = " << x << " and " << "y = " << y << endl;
        }
};

int main()
{
     ABC cc1; //constructor 1
     ABC cc2(10); //constructor 2
     ABC cc3(10,20); //constructor 3
     cc1.display();
     cc2.display();
     cc3.display();
     return 0;
 }  //end of program
 /*Explanation
In the above program, three constructors have been defined. The first one is invoked when no arguments is passed in ABC cc1. The second one is invoked when we pass one integer value as an argument as the constructor has one integer parameter. Similarly, when we pass two arguments in ABC cc3, the constructor with two arguments is invoked.

Note: Remember that the constructor cannot be declared with keyword virtual and references or pointers cannot be used on constructor as their addresses cannot be taken.
*/
