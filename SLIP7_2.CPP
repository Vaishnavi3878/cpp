#include<conio.h>
#include<iostream.h>
class vector
{
    int *a,*b;
    int n,n1;
     public:
    void create()
    {
         int i,j;
          cout<<"\nEnter the size of the vector space: ";
          cin>>n;
           a=new int[n];
          cout<<"\nEnter First the vector: ";
	  for(i=0;i<n;i++)
         {
           cin>>a[i];
         }
        cout<<"\nEnter the size of the vector space: ";
        cin>>n1;
         b=new int[n1];
         cout<<"\nEnter Second the vector: ";
       for(j=0;j<n1;j++)
      {
          cin>>b[j];
      }
   }

void display()
{
   int i,j;
  cout<<"\n The First vector is: (";
for(i=0;i<n;i++)
{
 cout<<a[i]<<",";
}

cout<<")";

cout<<"\n The Second vector is: (";
for(j=0;j<n1;j++)
{
cout<<b[j]<<",";
}
cout<<")";
}
void union1()
{
   cout<<"\n Unioon= (";
   for(int i=0;i<n;i++)
   {
	 cout<<a[i]<<"\t";
   }
   for(int j=0;j<n1;j++)
   {
	 cout<<b[j]<<"\t";
   }
   cout<<")";
}
};

int main()
{
vector v;
clrscr();
int ch;
do
{
cout<<"\n 1.Accpet vector \n 2.Display Vetor \n 3.Union";
cout<<"\n Enter choice : ";
cin>>ch;
switch(ch)
{
case 1 : v.create();
	    break;
case 2 : v.display();
	    break;
case 3:
	 v.union1();
}

}while(ch!=3);
getch();
}
