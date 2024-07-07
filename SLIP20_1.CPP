#include<iostream.h>
#include<conio.h>
class Number
{
   public:
   int a;
   void accept()
   {
      cout<<"Enter Number : ";
      cin>>a;
   }
   void disp()
   {
       cout<<endl<<"Number is : "<<a<<endl;
   }
   void operator ++()
   {
      ++a;
   }
   void operator ++(int)
   {
      a++;
   }
};
void main()
{
    Number ob;
    clrscr();
    ob.accept();
    ob.disp();
    ++ob;
    ob.disp();
    ob++;
    ob.disp();
    ob.disp();
    getch();
}
    
    