#include<iostream.h>
#include<conio.h>
class Square
{
   float s;
   public:
   void getdata()
   {
      cout<<"Enter the side of the square:";
      cin>>s;
   }
   float area()
   {
       return (s*s);
   }
   friend void compare(float s, float r);
};
class Rectangle
{
    float l,w;
    public:
    void getdata()
    {
        cout<<"Enter the length and width of the rectangle:";
        cin>>l>>w;
    }
    float area()
    {
       return(l*w);
    }
    friend void compare(float s, float r);
};
void compare(float s, float r)
{
    if(s>r)
    {
       cout<<"The area of square is bigger than area of rectangle."<<endl;
    }
    else
    {
        cout<<"The area of rectangle is bigger than area of square."<<endl;
    }
}
void main()
{
    float s_area,r_area;
    Square s1;
    Rectangle r1;
    clrscr();
    s1.getdata();
    s_area=s1.area();
    r1.getdata();
    r_area=r1.area();
    cout<<endl<<"Area of Square : "<<s_area<<endl;
    cout<<"Area of Rectangle : "<<r_area<<endl;
    compare(s_area,r_area);
    getch();
}
 