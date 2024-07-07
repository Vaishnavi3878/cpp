#include<iostream.h>
#include<conio.h>
class Shape
{
	public:
	virtual void area()=0;
};
class Circle:public Shape
{
	public:
		float r,a;
		void acceptc()
		{
			cout<<"\nEnter radius:";
			cin>>r;
                }
                void area()
                {
			a=3.14*r*r;
			cout<<"Area of circle="<<a;
		}
};
class Sphere:public Shape
{
	public:
		float r,a;
		void accepts()
		{
			cout<<"\n\nEnter Radius :";
			cin>>r;
                }
                void area()
                {
			a=4*3.14*r*r;
			cout<<"Area of Sphere="<<a;
		}
};
class Cylinder:public Shape
{
	public:
		float r,h,a;
		void accept()
		{
			cout<<"\n\nEnter radius & height:";
			cin>>r>>h;
                }
                void area()
                {
			a=((2*3.14*r*h)+(2*3.14*r*r));
			cout<<"Area of Cylinder="<<a;
		}
};
void main()
{
	clrscr();
        Circle ob;
        ob.acceptc();
	ob.area();
	
	Sphere ob1;
        ob1.accepts();
	ob1.area();
	
	Cylinder ob2;
        ob2.accept();
	ob2.area();
        getch();
}