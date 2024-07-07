#include<iostream.h>
#include<conio.h>
float volume(float h, float r)
{
   return (3.14*r*2*h);
}
float volume(double h, double r)
{
 return (3.14*r*2*h/3);  
}
float volume(float r)
{
   return (4/3*3.14*r*r*r);
}
void main()
{
   float cy_h,cy_r,r;
   double co_h,co_r;
   clrscr();
   cout<<"Enter height and radius of cylinder:";
   cin>>cy_h>>cy_r;
   cout<<"Volume of cylinder is:"<<volume(cy_h,cy_r)<<endl;
   cout<<endl;
   cout<<"Enter height and radius of cone:";
   cin>>co_h>>co_r;
   cout<<"Volume of cone is:"<<volume(co_h,co_r)<<endl;
   cout<<endl;
   cout<<"Enter radius of sphere:";
   cin>>r;
   cout<<"Volume of sphere is:"<<volume(r)<<endl;
   cout<<endl;
   getch();
}

   