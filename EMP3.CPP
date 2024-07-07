#include<iostream.h>
#include<conio.h>
class Emp
{
   public:
     int eno;
     char ename[20];
     float sal;
     void accept()
     {
        cout<<"Enter Emp no=";
        cin>>eno;
        cout<<"Enter Emp name=";
        cin>>ename;
        cout<<"Enter Emp sal=";
        cin>>sal;
     }
     void disp()
     {
        cout<<"Employee no="<<eno<<endl;
        cout<<"Employee name="<<ename<<endl;
        cout<<"Employee sal="<<sal<<endl;
     }
};
void main()
{
   int n,i,pass;
   clrscr();
   cout<<"Enter Limit=";
   cin>>n;
   Emp ob[20];
   for(i=0;i<n;i++)
      ob[i].accept();
   for(pass=1;pass<n;pass++)
   {
      for(i=0;i<n-pass;i++)
      {
         if(ob[i].sal<ob[i+1].sal)
         {
            Emp t=ob[i];
            ob[i]=ob[i+1];
            ob[i+1]=t;
         }
      }
   }
   for(i=0;i<n;i++)
      ob[i].disp();
   getch();
}
   