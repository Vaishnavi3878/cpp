#include<iostream.h>
#include<conio.h>
class Addition
{
   private:
   int a,b,c;
   public:
   void getvalue()
   {
      cout<<"Enter two nos:";
      cin>>a>>b;
   }
   friend void add(Addition &a)
};
void add(Addition &a)
{
   a.c=a.a+a.b;
   cout<<"Addition="<<a.c;
}
void main()
{
   Addition A;
   clrscr();
   A.getvalue();
   add(A);
   getch();
}