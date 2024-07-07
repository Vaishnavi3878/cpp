#include<iostream.h>
#include<conio.h>
class Time
{
   public:
   int hh,mm,ss;
   void accept()
   {
      cout<<"\nEnter Hours : ";
      cin>>hh;
      cout<<"\nEnter Minutes : ";
      cin>>mm;
      cout<<"\nEnter seconds : ";
      cin>>ss;
   }
   void display()
   {
      cout<<"\n Time : "<<hh<<":"<<mm<<":"<<ss<<endl;   
   }
   void diff(Time ob1, Time ob2)
   {
      hh=ob1.hh-ob2.hh;
      mm=ob1.mm-ob2.mm;
      ss=ob1.ss-ob2.ss;
      cout<<"\n Difference between Two times : "<<hh<<":"<<mm<<":"<<ss<<endl;   
   }
};
void main()
{
   Time ob1,ob2;
   clrscr();
   ob1.accept();
   ob2.accept();
   ob1.display();
   ob2.display();
   ob1.diff(ob1,ob2);
   getch();
}

