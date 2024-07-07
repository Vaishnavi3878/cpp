#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
   public:
   int Roll_no;
   char S_Name[20],Class[20];
   float per;
   void accept(int Roll_no, char S_Name[20], char Class[20], float per)
   {
      this->Roll_no=Roll_no;
      strcpy(this->S_Name,S_Name);
      strcpy(this->Class,Class);
      this->per=per;
   }
   void display()
   {
      cout<<endl<<"Roll No : "<<Roll_no<<endl;
      cout<<"Student Name : "<<S_Name<<endl;
      cout<<"Student Class : "<<Class<<endl;
      cout<<"Student Percentage : "<<per<<endl;
   }
};
void main()
{
   Student ob1,ob2;
   clrscr();
   ob1.accept(1,"om","sybbaca",85);
   ob2.accept(2,"sai","sybbaca",90.50);
   if(ob1.per>ob2.per)
      ob1.display();
   else
      ob2.display();
   getch();
}   
       