#include<iostream.h>
#include<conio.h>
class Array1
{
   public:
   int a[100],i,n1;
   void accept()
   {
      cout<<"Enter limit of Integer Array: ";
      cin>>n;
      for(i=0;i<n1;i++)
	cin>>a[i];
   }
   void disp()
   {
      cout<<endl<<"Integer Array : "<<endl;
      for(i=0;i<n1;i++)
	 cout<<a[i]<<"\t";
    }
    friend void average1(Array1,Array2);
}
class Array2
{
   public:
   float a[100],i,n2;
   void accept()
   {
      cout<<"Enter limit of float Array: ";
      cin>>n;
      for(i=0;i<n2;i++)
	cin>>a[i];
   }
   void disp()
   {
      cout<<endl<<"float Array : "<<endl;
      for(i=0;i<n2;i++)
	 cout<<a[i]<<"\t";
    }
    friend ;
}
void average(Array1 ob1,Array2 ob2)
{
   int s1,s2,i,n3,avg1,avg2,avg3;
   for(i=0;i<ob1.n1;i++)
       s1=s1+ob1.a[i];
   avg1=s1/ob1.n1;
   cout<<endl<<"Average of Integer array : "<<avg1<<endl;
   for(i=0;i<ob2.n2;i++)
       s2=s2+ob2.a[i];
   avg2=s2/ob2.n2;
   cout<<endl<<"Average of Float array : "<<avg2<<endl;
}
void main()
{
   Array1 ob1;
   Array2 ob2;
   clrscr();
   ob1.accept();
   ob1.disp();
   ob2.accept();
   ob2.disp();
   average(ob1,ob2);
   getch();
}
