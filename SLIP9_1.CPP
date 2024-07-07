#include<iostream.h>
#include<conio.h>
class Person
{
   char Name[20];
   char Addr[30];
   float Salary;
   float tax_amount;
   public:
   void getdata()
   {
      cout<<"Enter Name : ";
      cin>>Name;
      cout<<endl<<"Enter Address : ";
      cin>>Addr;
      cout<<endl<<"Enter salary : ";
      cin>>Salary;
   }
   void cal_tax()
   {
       if(Salary<=20000)
          tax_amount=0;
       if(Salary>20000||Salary<=40000)
          tax_amount=Salary*0.05;
       if(Salary>40000)
          tax_amount=Salary*0.1;
    }
    void display()
    {
        cout<<endl<<"Name : "<<Name<<endl;
        cout<<endl<<"Address : "<<Addr<<endl;
        cout<<endl<<"Salary : "<<Salary<<endl;
        cout<<endl<<"Tax Amount : "<<tax_amount<<endl;
    }
};
void main()
{
    Person ob;
    clrscr();
    ob.getdata();
    ob.cal_tax();
    ob.display();
    getch();
}