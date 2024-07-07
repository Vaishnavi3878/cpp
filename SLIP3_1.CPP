#include<iostream.h>
#include<conio.h>
void swap(int &a, int &b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;
}
void main()
{
    int a,b;
    clrscr();
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"original numbers"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    swap(a,b);
    cout<<"After swapping numbers"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
    getch();
}