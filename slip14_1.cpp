#include<iostream.h>
#include<conio.h>
inline float diameter(float r)
{
   return (2*r);
}
inline float circum(float r)
{
   return (2*3.14*r);
}
inline float area(float r)
{
   return (3.14*r*r);
}
int main()
{
   float r;
   clrscr();
   cout<<endl<<"Enter Radius : ";
   cin>>r;
   cout<<endl<<"Diameter of Circle : "<<diameter(r)<<endl;
   cout<<"Circumference of Circle : "<<circum(r)<<endl;
   cout<<"Area of Circle : "<<area(r)<<endl;
   getch();
}
