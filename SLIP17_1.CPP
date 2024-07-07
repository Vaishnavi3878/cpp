#include<iostream.h>
#include<conio.h>
class MyMatrix
{
   public:
   int a[10][10],b[10][10],i,j;
   void accept()
   {
       cout<<"Enter matrix : ";
       for(i=0;i<2;i++)
          for(j=0;j<2;j++)
             cin>>a[i][j];
   }
   void disp()
   {
      cout<<endl<<"matrix : "<<endl;
      for(i=0;i<2;i++)
      {
        for(j=0;j<2;j++)
        {
           cout<<a[i][j]<<"\t";
        }
        cout<<endl;
      }
    }
   void operator -(MyMatrix &ob1)
   {
      for(i=0;i<2;i++)
         for(j=0;j<2;j++)
            b[i][j]=a[i][j]-ob1.a[i][j];
      cout<<endl<<"Substraction of two matrices : "<<endl;
      for(i=0;i<2;i++)
      {
        for(j=0;j<2;j++)
        {
           cout<<b[i][j]<<"\t";
        }
        cout<<endl;
      }
    }
};
void main()
{
   MyMatrix ob,ob1;
   clrscr();
   ob.accept();
   ob1.accept();
   ob.disp();
   ob1.disp();
   ob-ob1;
   getch();
}
