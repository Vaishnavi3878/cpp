#include<iostream.h>
#include<conio.h>
class Date
{
    public:
    int dd,mm,yy;
    Date()
    {
       dd=13;
       mm=3;
       yy=2022;
    }
    Date(int dd,int mm,int yy)
    {
        this->dd=dd;
        this->mm=mm;
        this->yy=yy;
    }
    void display()
    {
        switch(mm)
        {
            case 1:cout<<"\nDate : "<<dd<<"/Jan/"<<yy;
                   break;
            case 2:cout<<"\nDate : "<<dd<<"/Feb/"<<yy;
                   break;
            case 3:cout<<"\nDate : "<<dd<<"/Mar/"<<yy;
                   break;
            case 4:cout<<"\nDate : "<<dd<<"/Apr/"<<yy;
                   break;
            case 5:cout<<"\nDate : "<<dd<<"/May/"<<yy;
                   break;
            case 6:cout<<"\nDate : "<<dd<<"/Jun/"<<yy;
                   break;
            case 7:cout<<"\nDate : "<<dd<<"/Jul/"<<yy;
                   break;
            case 8:cout<<"\nDate : "<<dd<<"/Aug/"<<yy;
                   break;
            case 9:cout<<"\nDate : "<<dd<<"/Sept/"<<yy;
                   break;
            case 10:cout<<"\nDate : "<<dd<<"/Oct/"<<yy;
                   break;
            case 11:cout<<"\nDate : "<<dd<<"/Nov/"<<yy;
                   break;
            case 12:cout<<"\nDate : "<<dd<<"/Dec/"<<yy;
                   break;
            default:cout<<endl<<"Invalid Date";
         }
      }
};
void main()
{
   clrscr();
   Date ob;
   ob.display();
   Date ob1(22,2,2001);
   ob1.display();
   getch();
}
            
        