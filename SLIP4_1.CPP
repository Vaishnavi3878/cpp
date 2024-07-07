#include<iostream.h>
#include<conio.h>
class worker
{
   char Worker_Name[20];
   int No_of_Hours_Worked;
   float Pay_Rate, Salary;
   public:
   void accept()
   {
      cout<<endl<<"Enter Worker Name:";
      cin>>Worker_Name;
      cout<<endl<<"Enter No of hours worked:"; 
      cin>>No_of_Hours_Worked;
      cout<<endl<<"Enter pay rate:";
      cin>>Pay_Rate; 
      cout<<endl<<"salary:";
      cin>>Salary;
   } 
  float cal(int no_of_hours, float pay_rate=100)
  {
     return (no_of_hours*pay_rate);
  }
  void display()
  {
    cout<<"Worker Name:"<<Worker_Name<<endl;
    cout<<"No of Hours Worked:"<<No_of_Hours_Worked<<endl;
    cout<<"Pay Rate:"<<Pay_Rate<<endl;
    cout<<"Salary:"<<Salary<<endl;
    cout<<"Salary:"<<cal(No_of_Hours_Worked)<<endl;
  }
};
void main()
{
   worker ob;
   clrscr();
   ob.accept();
   ob.display();
   getch();
}