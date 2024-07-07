#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class Account
{
   int Acc_number,Balance;
   char Acc_type[30];
   public:
   void getdata()
   {
       cout<<"Enter Account Number : ";
       cin>>Acc_number;
       cout<<endl<<"Enter Account Type : ";
       cin>>Acc_type;
       cout<<endl<<"Enter Account Balance : ";
       cin>>Balance;
   }
   void display()
   {
       cout<<endl<<"Account Number : "<<Acc_number<<endl;
       cout<<"Account Type : "<<Acc_type<<endl;
       cout<<"Account Balance : "<<Balance<<endl;
   }
};
void main()
{
   clrscr();
   int n,i;
   Account *a=new Account[10];
   delete[] a;
   cout<<endl<<"Enter Limit : ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       a[i].getdata();
   }   
   for(i=1;i<=n;i++)
   {
       a[i].display();
   }
   getch();
}  