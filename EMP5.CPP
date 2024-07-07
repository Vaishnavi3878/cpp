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
   int n,i,max,min,index1,index2;
   clrscr();
   cout<<"Enter Limit=";
   cin>>n;
   Emp ob[20];
   for(i=0;i<n;i++)
      ob[i].accept();
   max=ob[0].sal;
   index1=0;
   min=ob[0].sal;
   index2=0;
   for(i=1;i<n;i++)
   {
      if(ob[i].sal>max)
      {
	 max=ob[i].sal;
	 index1=i;
      }
      if(ob[i].sal<min)
      {
	 min=ob[i].sal;
	 index2=i;
      }
    }
    cout<<"\n\nMinimum salary employee=\n";
    ob[index2].disp();
    cout<<"\n\nMaximum salary employee=\n";
    ob[index1].disp();
    getch();
}