#include<iostream.h>
#include<conio.h>
#include<string.h>
int n;
class person
{
    public:
    int p_id;
    char pname[20],n1[20],g[6],dob[10],doi[10],doe[10];
    void accept()
    {
       cout<<"Enter Passport ID=";
       cin>>p_id;
       cout<<"Enter Person Name=";
       cin>>pname;
       cout<<"Enter Nationality=";
       cin>>n1;
       cout<<"Enter Genter=";
       cin>>g;
       cout<<"Enter Date of Birth=";
       cin>>dob;
       cout<<"Enter Date of Issue=";
       cin>>doe;
       cout<<"Enter Date of Expiry=";
       cin>>doe;
   }   
   void display(char name[20])
   {
      int i,flag=0;
      for(i=0;i<n;i++)
      {
         if(strcmp(ob[i].pname,name)==0)
         {
            cout<<"\n\nPassport ID="<<ob[i].p_id<<endl;
            cout<<"Person Name="<<ob[i].pname<<endl;
            cout<<"Nationality="<<ob[i].n1<<endl;
            cout<<"Gender="<<ob[i].g<<endl;
            cout<<"Date of Birth="<<ob[i].dob<<endl;
            cout<<"Date of Issue="<<ob[i].doi<<endl;
            cout<<"Date of Expiry="<<ob[i].doe<<endl;
            flag=1;
            break;
         }
         if(flag==0)
           cout<<"Record not found........";
      }
   }
   void display()
   {
      int i;
      for(i=0;i<n;i++)
      {
         cout<<"\n\nPassport ID="<<ob[i].p_id<<endl;
         cout<<"Person Name="<<ob[i].pname<<endl;
         cout<<"Nationality="<<ob[i].n1<<endl;
         cout<<"Gender="<<ob[i].g<<endl;
         cout<<"Date of Birth="<<ob[i].dob<<endl;
         cout<<"Date of Issue="<<ob[i].doi<<endl;
         cout<<"Date of Expiry="<<ob[i].doe<<endl;
      }
   }
}ob[100];
void main()
{
   int ch,i;
   person obj;
   char pname[20];
   clrscr();
   cout<<"Enter Limit=";
   cin>>n;
   for(i=0;i<n;i++)
      ob[i].accept();
   do
   {
       cout<<"\n1-Display Specific Person \n2-Display All \n3-Exit \nEnter Your Choice=";
       cin>>ch;
       switch(ch)
       {
           case 1:cout<<"Enter Person Name=";
                  cin>>pname;
                  obj.display(pname);
                  break;
           case 2:obj.display();
                  break;
       }
   }while(ch<3);
   getch();
}