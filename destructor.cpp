/*.....A program to highlight the concept of destructor.......... */
#include <iostream>
using namespace std;
class ABC
{
    public:
        ABC () //constructor defined
       {
 	    cout << "Hey look I am in constructor" << endl;
       }
       ~ABC() //destructor defined
       {
             cout << "Hey look I am in destructor" << endl;
       }
};

int main()
{
     ABC cc1; //constructor is called
     cout << " more than one destructor can’t be used in a program. Only single destructor is allowed.function main is terminating...." << endl;
     /*....object cc1 goes out of scope ,now destructor is being called...*/
     return 0;
}  //end of program
