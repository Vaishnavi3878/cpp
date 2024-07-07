#include<iostream.h>
#include<conio.h>
class Travels
{
   public:
   int tno;
   char cname[20];
   void acceptT()
   {
      cout<<"\nEnter Travel No:";
      cin>>tno;
      cout<<"\nEnter Company Name:";
      cin>>cname;
   }
};
class Route:public Travels
{
   public:
   int route_id;
   char s[20],d[20];
   void acceptR()
   {
      cout<<"\nEnter Route ID:";
      cin>>route_id;
      cout<<"\nEnter Source:";
      cin>>s;
      cout<<"\nEnter Destination:";
      cin>>d;
   }
};
class Reservation:public Route
{
   public:
   int no_of_seats,fare;
   char tclass[20],date[10];
   void accept()
   {
      cout<<"\nEnter No of Seats:";
      cin>>no_of_seats;
      cout<<"\nEnter Fare:";
      cin>>fare;
      cout<<"\nEnter Travel Class:";
      cin>>tclass;
      cout<<"\nEnter Travel Date:";
      cin>>date;
   }
   void disp()
   {
      cout<<"\nTravel No:"<<tno;
      cout<<"\nCompany Name:"<<cname;
      cout<<"\nRoute ID:"<<route_id;
      cout<<"\nSource:"<<s;
      cout<<"\nSSC Destination:"<<d;
      cout<<"\nNo of Seats:"<<no_of_seats;
      cout<<"\n:Travel Class:"<<tclass;
      cout<<"\n:Travel Date:"<<date;
   }
};
void main()
{
   int n,i,ch;
   char d[10];
   clrscr();
   cout<<"\nEnter Limit:";
   cin>>n;
   Reservation ob[100];
   do
   {
      cout<<"\n1-Accept Details of n Reservation \n2-Display Details of All Reservations \n3-Display Reservation Details of Specifiead Date \n4-Exit";
      cout<<"\nEnter your choice:";
      cin>>ch;
      switch(ch)
      {
	 case 1:for(i=0;i<n;i++)
                {
                   ob[i].acceptT();
                   ob[i].acceptR();
                   ob[i].accept();
                }
                break;
         case 2:for(i=0;i<n;i++)
                  ob[i].disp();
                break;
         case 3:cout<<"\nEnter date to display details:";
                cin>>d;
                for(i=0;i<n;i++)
                {
                   if(ob[i].date==d)
                     ob[i].disp();
                }
       }
    }while(ch<4);
   getch();
}       