#include<iostream.h>
#include<conio.h>
class Demo
{
    public:
    int replace(char s1[20], char ch1, char ch2='a')
    {
       int cnt=0;
       for(int i=0;s1[i]!='\0';i++)
       {
          if(s1[i]==ch1)
          {
            s1[i]=ch2;
            cnt++;
          }
       }
       cout<<endl<<"Replaced string : "<<s1<<endl;
       return cnt;
    }
};
void main()
{
   Demo ob1;
   clrscr();
   cout<<endl<<"No of Replacement : "<<ob1.replace("shrirampur",'r')<<endl;
   getch();
}
   