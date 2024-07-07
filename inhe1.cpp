#include<iostream.h>
#include<conio.h>
class Personnel
{
   public:
   char name[20],add[20],email[20],dob[10];
   void acceptp()
   {
      cout<<"\nEnter Name:";
      cin>>name;
      cout<<"\nEnter Address:";
      cin>>add;
      cout<<"\nEnter Email:";
      cin>>email;
      cout<<"\nEnter Date of Birth in dd-mm-yyyy format:";
      cin>>dob;
   }
};
class Academic
{
   public:
   char pclass[20];
   float ssc,hsc;
   void accepta()
   {
      cout<<"\nEnter SSC Percentage:";
      cin>>ssc;
      cout<<"\nEnter HSC Percentage:";
      cin>>hsc;
      cout<<"\nEnter Present Class:";
      cin>>pclass;
   }
};
class Biodata:public Personnel,public Academic
{
   public:
   void disp()
   {
      cout<<"\nName:"<<name;
      cout<<"\nAddress:"<<add;
      cout<<"\nEmail-ID:"<<email;
      cout<<"\nDate of Birth:"<<dob;
      cout<<"\nSSC percentage:"<<ssc;
      cout<<"\nHSC percentage:"<<hsc;
      cout<<"\nPresent Class:"<<pclass;
   }
};
void main()
{
   Biodata ob;
   ob.acceptp();
   ob.accepta();
   ob.disp();
   getch();
}       