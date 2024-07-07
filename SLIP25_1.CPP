#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
inline float mean(int a,int b,int c)
{
   return (a+b+c/3);
}
inline float mode(int a, int b, int c)
{
   if(a==b||a==c)
     return a;
   if(b==a||b==c)
     return b;
   if(c==a||c==b)
     return c;
}
inline float median(int a,int b,int c)
{
   int arr[]={a,b,c};
   sort(arr,arr+3);
   return arr[1];
}
void main()
{
   int n1,n2,n3;
   clrscr();
   cout<<"Enter three integer numbers : ";
   cin>>n1>>n2>>n3;
   cout<<endl<<"Mean : "<<mean(n1,n2,n3)<<endl;
   cout<<"Mode : "<<mode(n1,n2,n3)<<endl;
   cout<<"Median : "<<median(n1,n2,n3)<<endl;
   getch();
}
   