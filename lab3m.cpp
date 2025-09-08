#include<iostream>
using namespace std;
class Rect
{
    int length;
    int breadth;
   public:
   void getdata();
   void showdata();
  
};
     void Rect::getdata()
    {
      cout<<"Enter the length"<<endl;
      cin>>length;
      cout<<"Enter the breadth"<<endl;
      cin>>breadth;
    }
      void Rect::showdata()
     {
      cout<<"The length of rectangle is :"<<length<<endl;
      cout<<"The breadth of rectangle is :"<<breadth<<endl;
     }
   
   int main()
{
    Rect obj1;
    obj1.getdata();
    obj1.showdata();

    Rect obj2;
    obj2.getdata();
    obj2.showdata();
    return 0;
}