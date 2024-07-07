#include<iostream.h>
#include<conio.h>
void main()
{
   int i,n;
   clrscr();
   cout<<"Enter Limit : ";
   cin>>n;
   int *a=new int[n];
   cout<<"\n Enter n numbers : \n";
   for(i=0;i<n;i++)
     cin>>a[i];
   cout<<"\n Reverse Array : \n";
   for(i=n-1;i>=0;i--)
      cout<<a[i]<<"\t";
   getch();
}