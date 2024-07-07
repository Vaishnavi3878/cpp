#include<iostream.h>
#include<conio.h>
class Student
{
   public:
   int rno;
   char sname[20];
   void accepts()
   {
      cout<<"Enter rno, name : ";
      cin>>rno>>sname;  
   }
   void disps()
   {
      cout<<"rno : "<<rno<<endl;
      cout<<"name : "<<sname<<endl;
   }
};
class Theory:virtual public Student
{
   public:
   int m1,m2,m3,m4;
   void acceptt()
   {
     cout<<"\nEnter 4 theory subject marks : ";
     cin>>m1>>m2>>m3>>m4;
   }
   void dispt()
   {
      cout<<"Theory subject marks : "<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<endl; 
   }
};
class Practical:virtual public Student
{
   public: 
   int p1,p2;
   void acceptp()
   {
      cout<<"\nEnter 2 Practical subject marks : ";
      cin>>p1>>p2;
   }
   void dispp()
   {
      cout<<"Practical subject marks : "<<p1<<"\t"<<p2<<endl; 
   }
};
class Result:public Theory,public Practical
{
   public:
   int t,p;
   char g;
   void cal()
   {
      t=0;
      t=m1+m2+m3+m4+p1+p2;
      p=t/6;
      if(p>90)
         g='o';
      else if(p>75)
         g='A';
       else if(p>65)
         g='B';
       else if(p>55)
         g='C';
       else if(p>40)
         g='D';
       else
         g='F';
    }
    void dispr()
    { 
       cout<<"\n***********************************Result***********************************"<<endl;
       cout<<"rno : "<<rno<<endl;
       cout<<"name : "<<sname<<endl;
       cout<<"Theory subject marks : "<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<endl;
       cout<<"Practical subject marks : "<<p1<<"\t"<<p2<<endl;
       cout<<"Total obtain Marks : "<<t<<endl;
       cout<<"Percentage : "<<p<<endl;
       cout<<"Grade : "<<g<<endl;
    }
};  
void main()
{
   Result ob1;
   int ch;
   clrscr();
   do
   {
       cout<<"\n\n1. accept student info\n2. display student info\n3. calculate\n4. Exit\nEnter your choice : ";
       cin>>ch;       
       switch(ch)
       {
           case 1:ob1.accepts();
                  ob1.acceptt();
                  ob1.acceptp();
                  break;
           case 2:ob1.disps();
                  ob1.dispt();
                  ob1.dispp();
                  break;
           case 3:ob1.cal();
                  ob1.dispr();
                  break;
       }
    }while(ch<4);
    getch();
}
           

           
    
