#include<iostream.h>
#include<conio.h>
class Fraction
{
   public:
   int n,d;
   Fraction( int n, int d)
   {
       this->n=n;
       this->d=d;
   }
   void add( Fraction ob1, Fraction ob2)
   {
      n=ob1.n+ob2.n;
      d=ob1.d+ob2.d;
      cout<<"Sum of two fractions : "<<n<<"/"<<d<<endl;
   }
};
void main()
{
   clrscr();
   Fraction ob1(15,16);
   Fraction ob2(35,11);
   ob1.add(ob1,ob2);
   getch();
}