#include<iostream.h>
#include<conio.h>
class Distance
{
   public:
   float m,cm;
   void accept(float m, float cm)
   {
      this->m=m;
      this->cm=cm;
   }
   void disp()
   {
      cout<<endl<<"Meter : "<<m<<endl;
      cout<<"Centimeter : "<<cm<<endl;
   }
   void larger(Distance ob1, Distance ob2)
   {
      if(ob1.m=ob2.m)
      {
         if(ob1.cm>ob2.cm)
           ob1.disp();
         else if(ob1.m>ob2.m)
           ob1.disp();
         else
           ob2.disp();
      }
   }
};
void main()
{
    Distance ob1,ob2;
    clrscr();
    ob1.accept(24.4f,6.2f);
    ob2.accept(14.4f,14.3f);
    ob1.larger(ob1,ob2);
    getch();
} 