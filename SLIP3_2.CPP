#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
   ofstream f1,f2;
     int num;
   clrscr();
   f1.open("even.txt",ios::out);
   f2.open("odd.txt",ios::out);
   for(int i=1;i<=argc;i++)
   {
      num=atoi(argv[i]);
      if(num%2==0)
        f1<<num<<endl;
      else
        f2<<num<<endl;
   }
   f1.close();
   f2.close();
   getch();
   
}