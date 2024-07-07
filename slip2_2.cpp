#include<iostream.h>
#include<fstream.h>
#include<stdlib.h>
#include<conio.h>
class Movie
{
   public:
   ofstream f1;
   ifstream f2;
   char mname[20],dname[20];
   int y;
   long int budget;
   void accept(int n)
   {
      f1.open("movie.txt",ios::out);
      for(int i=0;i<n;i++)
      {
        cout<<"Enter Movie Name, Release Year, Director Name, and Budget : ";
        cin>>mname>>y>>dname>>budget;
        f1<<mname<<endl;
        f1<<y<<endl;
        f1<<dname<<endl;
        f1<<budget<<endl<<endl;
      }
      f1.close();
   }
   void disp(int n)
   {
      f2.open("movie.txt",ios::in);
      for(int i=0;i<n;i++)
      {
        f2>>mname;
        f2>>y;
        f2>>dname;
        f2>>budget;
        cout<<endl<<"Movie Name : "<<mname<<endl;
        cout<<"Release Year : "<<y<<endl;
        cout<<"Director Name : "<<dname<<endl;
        cout<<"Budget : "<<budget<<endl;
      }
      f2.close();
    }
};
void main()
{
   Movie ob;
   int n;
   clrscr();
   cout<<"Enter Limit : ";
   cin>>n;
   ob.accept(n);
   ob.disp(n);
   getch();
}

