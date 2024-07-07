#include<iostream.h>
#include<conio.h>
class MyArray
{
    public:
    int *a,i,n;
    MyArray(int n)
    {
       this->n=n;
       a=new int[n];
       cout<<"Enter n Numbers : ";
       for(i=0;i<n;i++)
         cin>>a[i];
    }
    void display()
    {
        int s=0;
        cout<<endl<<"Array elements are : "<<endl;
        for(i=0;i<n;i++)
            cout<<a[i]<<"\t";
        for(i=0;i<n;i++)
            s=s+a[i];
        cout<<endl<<"Sum of Array Elements : "<<s;
    }
    ~MyArray()
    {
       delete a;
    }
};
void main()
{
   clrscr();
   MyArray ob(5);
   ob.display();
   getch();
}
