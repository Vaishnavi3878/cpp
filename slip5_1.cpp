#include<iostream.h>
#include<conio.h>
class Point
{
   float x,y;
   public:
   void setpoint(float a, float b)
   {
      x=a;
      y=b;
   }
   void showpoint()
   {
       cout<<endl<<"Coordinates : ("<<x<<","<<y<<")"<<endl;
   }
};
void main()
{
   float a,b;
   Point p;
   clrscr();
   cout<<"Enter Coordinates"<<endl;
   cout<<"Enter x:";
   cin>>a;
   cout<<endl<<"Enter y:";
   cin>>b;
   p.setpoint(a,b);
   p.showpoint();
   getch();
}