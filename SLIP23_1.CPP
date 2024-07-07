#include<iostream.h>
#include<conio.h>
#include<string.h>
class MyString
{
   public:
   char *s1;
   void accept()
   {
      s1=new char[20];
      cout<<"Enter String :";
      cin>>s1;
   }
   void disp()
   {
      cout<<endl<<"String : "<<s1<<endl;
   }
   void operator +(MyString ob1)
   {
      strcat(s1,ob1.s1);
      cout<<"Concatnated string : "<<s1;
   }
};
void main()
{
   MyString ob,ob1;
   clrscr();
   ob.accept();
   ob1.accept();
   ob.disp();
   ob1.disp();
   ob+ob1;
   getch();
}
   