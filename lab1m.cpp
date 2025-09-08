#include<iostream>
using namespace std;
class Room
{
public:
double Length;
double Breadth;
double Height;
double calculate_area()
{
    return Length*Breadth;
}
double calculate_volume()
{
    return Length*Breadth*Height;
}
};
int main()
{
Room R1;
double y;
R1.Length = 5.5;
R1.Breadth = 10.6;
R1.Height = 9.5;
y = R1.calculate_volume();
cout<< y;
return 0;
}
