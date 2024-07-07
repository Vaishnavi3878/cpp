#include<iostream.h>
#include<conio.h>
inline int max(int a, int b)
{
    return ((a>b)?a:b);
}
inline int min(int a, int b)
{
    return ((a<b)?a:b);
}
void main()
{
    int a,b;
    clrscr();
    cout<<"Enter Two Numbers:"<<endl;
    cin>>a>>b;
    cout<<"Maximum Number is:"<<max(a,b)<<endl;
    cout<<"Minimum Number is:"<<min(a,b)<<endl;
    getch();
}