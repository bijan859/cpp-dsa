#include<iostream>
using namespace std;
class Calculator
{
    int num1,num2;
    public:
     Calculator(int a,int b)
     {
        num1=a;
        num2=b;
     }
     void add()
     {
      cout<<"Sum"<<num1+num2;
     }
     void substract()
     {
      cout<<endl<<"Diff"<<num1-num2;
     }
     void multiply()
     {
      cout<<endl<<"Product"<<num1*num2;
     }

};
int main()
{
   int a,b;
   cout<<"Enter the two numbers:\n";
   cin>>a>>b;
   Calculator c1(a,b);
   c1.add();
   c1.substract();
   c1.multiply();
   return 0;

}