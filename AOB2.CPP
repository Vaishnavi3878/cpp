#include<iostream.h>
#include<conio.h>
#include<string.h>
int n;
class Manager
{
   public:
   int m_id;
   char m_name[20],phno[10];
   float sal;
   void accept()
   {
      cout<<"Enter Manager ID=";
      cin>>m_id;
      cout<<"Enter Manager Name=";
      cin>>m_name;
      cout<<"Enter Mobile No.=";
      cin>>phno;
      cout<<"Enter salary=";
      cin>>sal;
   }
   void display()
   {
     int i,pass;
     for(pass=1;pass<n;pass++)
     {
        for(i=0;i<n-pass;i++)
        {
           if(ob[i].sal>ob[i+1].sal)
           {
               Manager t=ob[i];
               ob[i]=ob[i+1];
               ob[i+1]=t;
           }
        }
     }
     for(i=0;i<n;i++)
     {
        cout<<"Manager ID="<<ob[i].m_id<<endl;
        cout<<"Manager Name="<<ob[i].m_name<<endl;
        cout<<"Mobile No.="<<ob[i].phno<<endl;
        cout<<"Salary="<<ob[i].sal<<endl;
     }
   }
   void display(int id)
   {
      int i,flag=0;
      for(i=0;i<n;i++)
      {
         if(ob[i].m_id==id)
         {
            cout<<"Manager ID="<<ob[i].m_id<<endl;
            cout<<"Manager Name="<<ob[i].m_name<<endl;
            cout<<"Mobile No.="<<ob[i].phno<<endl;
            cout<<"Salary="<<ob[i].sal<<endl;
            flag=1;
            break;
         }
      }
      if(flag==0)
        cout<<"Record not found....";
   }
}ob[100];
void main()
{
   int ch,i,id;
   Manager obj;
   clrscr();
   cout<<"Enter Limit=";
   cin>>n;
   for(i=0;i<n;i++)
      ob[i].accept();
   do
   {
       cout<<"\n1-Display ascending oreder of sal\n2-Display particular Manager\n3-Exit \nEnter Your Choice=";
       cin>>ch;
       switch(ch)
       {
           case 1:obj.display();
                  break;
           case 2:cout<<"Enter Manager id=";
                  cin>>id;
                  obj.display(id);
                  break;
       }
   }while(ch<3);
   getch();
}
       
   
     