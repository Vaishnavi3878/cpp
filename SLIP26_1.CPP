#include<iostream.h>
#include<conio.h>
void avg(int a, int b, int c)
{
   float avg;
   avg=(a+b+c)/3;
   cout<<"Average of Three Integer Numbers : "<<avg<<endl;
}
void avg(float a, float b, float c)
{
   float avg;
   avg=(a+b+c)/3;
   cout<<"Average of Three Float Numbers : "<<avg<<endl;
}
void main()
{
   clrscr();
   avg(11,22,33);
   avg(11.30f,35.15f,28.56f);
   getch();
}