#include<iostream.h>
#include<conio.h>
class College
{
   public:
   int cid,y;
   char cname[50],uname[50];
   void operator>>(College &ob)
   {
      cout<<"Enter College ID, College Name, Establishment Year, Univercity Name : ";
      cin>>ob.cid>>ob.cname>>ob.y>>ob.uname;
   }
   void operator<<(College &ob)
   {
      cout<<endl<<"College ID : "<<ob.cid<<endl;
      cout<<"College Name : "<<ob.cname<<endl;
      cout<<"Establishment Year : "<<ob.y<<endl;
      cout<<"Univercity Name : "<<ob.uname<<endl;
   }
};
void main()
{
   College ob;
   clrscr();
   ob>>ob;
   ob<<ob;
   getch();
}