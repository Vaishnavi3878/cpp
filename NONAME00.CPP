#include<iostream.h>
#include<conio.h>
template<class T1>
template<class T2>
void min_max(T1 a, T1 b)
{
   if(a>b)
      cout<<"\nMAx No="<<a;
   else
      cout<<"\nMax No="<<b;
}
void min(T2 a, T2 b)
{
  if(a<b)
     cout<<"\nMin No="<<a;
   else
      cout<<"\nMin No="<<b;
}
void main()
{
   clrscr();
   min_max(11,44);
   min_max(511.44f,44.22f);
   min(11,44);
   min(511.44f,44.22f);
   getch();
}