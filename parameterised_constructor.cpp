#include<iostream>
 using namespace std;

 class Rectangle
 {
     private:int length,breadth,x;
     public:Rectangle(int a,int b)
     {
         length = a;
         breadth = b;
     };
     int area()
     {
         x = length * breadth;
     }
     void display()
     {
         cout<<"Area is :"<<x<<"\n";
     }
 };

 int main()
 {
     Rectangle r(2,4);//IMPLICIT
     r.area();
     r.display();

     Rectangle r1 = Rectangle(4,4);//EXPLICIT
     r1.area();
     r1.display();
     return 0;
 }
