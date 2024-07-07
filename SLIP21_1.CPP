#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
class Employee
{
   public:
   int Emp_id;
   char Emp_Name[20],Company_Name[20];
   float Salary;
   void accept()
   {
      cout<<"Enter Employee ID, Employee Name, Company Name, Salary : "<<endl;
      cin>>Emp_id>>Emp_Name>>Company_Name>>Salary;
   }
   void disp()
   {
      cout<<endl<<"Employee ID : "<<Emp_id<<endl;
      cout<<"Employee Name : "<<Emp_Name<<endl;
      cout<<"Company Name : "<<Company_Name<<endl;
      cout<<"Salary : "<<setfill('*')<<setw(7)<<Salary;
      cout.setf(ios::right,ios::adjustfield);
   }
};
void main()
{
   Employee ob;
   clrscr();
   ob.accept();
   ob.disp();
   getch();
}