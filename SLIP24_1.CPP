#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string.h>
class FixDeposit
{
   public:
   int FD_No,nom;
   char Cust_Name[20];
   float FD_Amt,I_rate,M_Amt;
   FixDeposit(int fdno, char cname[20], float famt, int n, float rate=7.5)
   {
       FD_No=fdno;
       strcpy(Cust_Name,cname);
       FD_Amt=famt;
       nom=n;
       I_rate=rate;
    }
    void calculate()
    {
       double y;
       y=(nom/12.0);
       M_Amt=FD_Amt*pow(1+I_rate/100),y);
    }
    void display()
    {
       cout<<endl<<"FD NO            : "<<FD_No<<endl;
       cout<<endl<<"Customer Name    : "<<Cust_Name<<endl;
       cout<<endl<<"FD Amount        : "<<FD_Amt<<endl;
       cout<<endl<<"Interest Rate    : "<<I_rate<<endl;
       cout<<endl<<"Maturity Amount  : "<<M_Amt<<endl;
       cout<<endl<<"Number of months : "<<nom<<endl;
    }
};
void main()
{
  clrscr()
  FixDeposit ob1(101,"om",40000,6);
  ob1.calculate();
  ob1.display();
  getch();
}

