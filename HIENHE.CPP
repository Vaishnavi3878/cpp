#include<iostream.h>
#include<conio.h>
class College
{
   public:
   int cno;
   char cname[20],cadd[20];
   void acceptc()
   {
      cout<<"\nEnter College No:";
      cin>>cno;
      cout<<"\nEnter College Name:";
      cin>>cname;
      cout<<"\nEnter College Address:";
      cin>>cadd;
   }
   void dispc()
   {
      cout<<"\nCollege No:"<<cno;
      cout<<"\nCollege Name:"<<cname;
      cout<<"\nCollege Address:"<<cadd;
   }
};
class Teacher:public College
{
   public:
   int tno;
   char tname[20];
   float sal;
   void acceptt()
   {
      cout<<"\nEnter Teacher No:";
      cin>>tno;
      cout<<"\nEnter Teacher Name:";
      cin>>tname;
      cout<<"\nEnter Teacher Salary:";
      cin>>sal;
   }
   void dispt()
   {
      cout<<"\nTeacher No:"<<tno;
      cout<<"\nTeacher Name:"<<tname;
      cout<<"\nTeacher Salary:"<<sal;
   }
};
class Student:public College
{
   public:
   int rno;
   char sname[20];
   float per;
   void accepts()
   {
      cout<<"\nEnter Student No:";
      cin>>rno;
      cout<<"\nEnter Student Name:";
      cin>>sname;
      cout<<"\nEnter Student Percentage:";
      cin>>per;
   }
   void disps()
   {
      cout<<"\nStudent Roll No:"<<rno;
      cout<<"\nStudent Name:"<<sname;
      cout<<"\nStudent Percentage:"<<per;
   }
};
void main()
{
   Teacher ob1;
   Student ob2;
   clrscr();
   ob1.acceptc();
   ob1.acceptt();
   ob1.dispc();
   ob1.dispt();
   ob2.acceptc();
   ob2.accepts();
   ob2.dispc();
   ob2.disps();
   getch();
}       