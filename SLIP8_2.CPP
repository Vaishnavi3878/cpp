/*Create a C++ class Person with data members Person name, Mobile number, Age, City.
 Write necessary member functions for the following:
i. Search the mobile number of given person.
ii. Search the person name of given mobile number.
iii. Search all person details of given city.
(Use function overloading)
*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
int n,i;
class Person
{
   public:
	  char pname[20], city[20];
	  long int mob;
	  int age;
	  void accept()
	  {
	     cout<<"Enter Person name mob city age:";
	     cin>>pname>>mob>>city>>age;
	  }
	  long int search(char name[20],Person ob[100])
	  {
	     int mno;
	     for(i=0;i<n;i++)
	       if(strcmp(ob[i].pname,name)==0)
		  mno=ob[i].mob;
	      return mno;
	  }
	  void search(long int mno, Person ob[100])
	  {
	     for(i=0;i<n;i++)
	       if(mno==ob[i].mob)
		cout<<endl<<"Person Name :"<<ob[i].pname;
	  }
	  void search(Person ob[100])
	  {
	     char c[20];
	     cout<<"Enter city name:";
	     cin>>c;
	     for(i=0;i<n;i++)
	       if(strcmp(c,ob.city)==0)
	       {
		  cout<<endl<<"Person Name :"<<ob[i].pname;
		  cout<<endl<<"Mobile No :"<<ob[i].mob;
		  cout<<endl<<"Age :"<<ob[i].age;
		  cout<<endl<<"City Name :"<<ob[i].city;
	       }
	  }
};
void main()
{
  long int mob;
  int ch;
  char city[20],pname[20];
  cout<<"Enter limit:";
  cin>>n;
  Person ob[100];
  do
  {
     cout<<"\n\n1. Accept\n2. Search the mobile number of given person\n3. Search the person name of given mobile number\n4. Search all person details of given city\n5. Exit\nEnter Your Choice : ";
     cin>>ch;
     switch(ch)
     {
	case 1:for(i=0;i<n;i++)
	       {
		  ob[i].accept();
	       }
	       break;
	case 2:cout<<"\nEnter Person Name to Search Mobile No : ";
	       cin>>pname;
	       for(i=0;i<n;i++)
	       {
		  cout<<"Mobile No : "<<ob[i].search(pname,ob)<<endl;
	       }
	       break;
	case 3:cout<<"\nEnter Mobile No to Search Person Name : ";
	       cin>>mob;
	       for(i=0;i<n;i++)
	       {
		  ob[i].search(mob,ob);
	       }
	       break;
	case 4:for(i=0;i<n;i++)
	       {
		  ob[i].search(ob);
	       }
	       break;
      }
   }while(ch<5);
 getch();
}