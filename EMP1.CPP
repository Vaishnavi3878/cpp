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
   int n,i;
   clrscr();
   cout<<"Enter Limit=";
   cin>>n;
   Emp ob[20];
   for(i=0;i<n;i++)
      ob[i].accept();
   for(i=0;i<n;i++)
   {
      if(ob[i].sal>20000)
        ob[i].disp();
   }
   getch();
}