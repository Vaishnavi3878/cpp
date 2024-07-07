#include<iostream.h>
#include<conio.h>
#include<string.h>
int n,i;
class City
{
   public:
	  int code;
          char cname[20];
          long int p;
          void accept()
          {
             cout<<"Enter city code, city name, population:";
             cin>>code>>cname>>p;
          }
          void sort()
          {
             for(int pass=1;pass<n;pass++)
             {
                for(i=0;i<n-pass;i++)
                {
                   if(ob[i].p>ob[i+1].p)
                   {
                      City t=ob[i];
                      ob[i]=ob[i+1];
                      ob[i+1]=t;                 
                   }
                }
             }
             for(i=0;i<n;i++)
             {
                cout<<ob[i].code<<"\t"<<ob[i].cname<<"\t"<<ob[i].p<<endl;
             }
          }
          void disp_city(char city[20])
          {
	     for(i=0;i<n;i++)
	     {
	        if(strcmp(ob[i].cname,city)==0)
	        {
		   cout<<"\n City code"<<ob[i].code;
		   cout<<"\n City Name="<<ob[i].cname;
		   cout<<"\n Population="<<ob[i].p;
	        }
	     }
          }
}ob[100],obj;
void main()
{
   char city[20];
   clrscr();
   cout<<"Enter limit:";
   cin>>n;
   for(i=0;i<n;i++)
   {
      ob[i].accept();
   }

    obj.sort();
   cout<<"Enter city name :";
   cin>>city;
   obj.disp_city(city);
   getch(); 
}