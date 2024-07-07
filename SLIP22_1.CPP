#include<iostream.h>
#include<conio.h>
template<class T1>
void calculate(T1 a)
{
   T1 s=a*a;
   T1 c=a*a*a;
   cout<<"Square of a given number is : "<<s<<endl;
   cout<<"cube of a given number is : "<<c<<endl;

}
void main()
{
   clrscr();
   calculate(4);
   calculate(4.50f);
   getch();
}