#include<iostream.h>
#include<conio.h>
class Product
{
    public:
    int pid,qty,price;
    char pname[20];
    static int cnt;
    void accept()
    {
        cout<<"Enter Product id, Product name, Quantity, Price : ";
        cin>>pid>>pname>>qty>>price;
        cnt++;
    }
    void display()
    {
       cout<<"Product ID : "<<pid<<endl;
       cout<<"Product Name : "<<pname<<endl;
       cout<<"Product Quantity : "<<qty<<endl;
       cout<<"Product Price : "<<price<<endl;
    }
    static void nob()
    {
       cout<<endl<<"Number of objects created for class are : "<<cnt;
    }
};
int Product::cnt;
void main()
{
   clrscr();
   Product ob[10];
   int n,i;
   cout<<endl<<"Enter how many items:";
   cin>>n;
   for(i=0;i<n;i++)
     ob[i].accept();
   for(i=0;i<n;i++)
     ob[i].display();
   ob[n-1].nob();
   getch();
}
       
    