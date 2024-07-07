#include<iostream.h>
#include<conio.h>
class E_Bill
{
   public:
   char cname[20];
   int mid,unit;
   float charges;
   void accept()
   {
      cout<<"Enter Customer Name, Meter ID, No of Units : ";
      cin>>cname>>mid>>unit;
   }
   void calculate()
   {
      if(unit<=100)
        charges=150+(unit*1);
      else if((unit>100)&&(unit<=300))
      {
        int u=unit-100;
        charges=150+(100*1);
        charges=charges+(u*2);
        if(charges>250)
         charges=charges+(charges*15/100);
      }
      else
      {
        int u1,u2;
        u2=unit-300;
        u1=unit-u2-100;
        charges=150+(100*1);
        charges=charges+(u1*2);
        charges=charges+(u2*5);
        if(charges>250)
         charges=charges+(charges*15/100);

      }
   }
    void display()
    {
       cout<<endl<<"Customer Name : "<<cname<<endl;
       cout<<"Meter ID : "<<mid<<endl;
       cout<<"No of Units : "<<unit<<endl;
       cout<<"Charges : "<<charges<<endl;
    }
};
void main()
{
   E_Bill ob[10];
   int n,i;
   clrscr();
   cout<<"\nEnter how many users : ";
   cin>>n;
   for(i=0;i<n;i++)
     ob[i].accept();
   cout<<"\nCalculation of bill : \n";
   for(i=0;i<n;i++)
   {
      ob[i].calculate();
      ob[i].display();
   }
   getch();
} 