#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<iomanip.h>
class Machine
{
   public:
   int mid;
   char mname[20];
   double price;
   Machine(int id,char name[20],double p)
   {
      mid=id;
      strcpy(mname,name);
      price=p;
   }
   Machine(Machine &ob)
   {
      mid=ob.mid;
      strcpy(mname,ob.mname);
      price=ob.price;
   }
   void display()
   {
      cout<<"Machine ID : "<<setw(10)<<mid<<endl;
      cout<<"Machine Name : "<<setw(10)<<mname<<endl;
      cout<<"Price : "<<setprecision(4)<<price<<endl;
   }
};
void main()
{
   clrscr();
   Machine ob(101,"archana",50000.5349093230);
   ob.display();
   Machine ob1(ob);
   ob1.display();
   getch();
}
   

   