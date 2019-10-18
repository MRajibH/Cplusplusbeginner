#include <iostream>
using std::cin;
using std::cout;
struct rectangle
{
    double height;
    double width;
};
 //for Rectangle
double area(double length, double width)
{
    return length * width;
}
//for square
double area(double length)
{
    return length * length;
}
// passing object from main creating object as parameter
double area(rectangle newobject)
{
    return newobject.height * newobject.width;
}


int main(void)
{
    rectangle Rectangle;
    Rectangle.height = 10;
    Rectangle.width = 20;
    cout<<"Area: "<<area(Rectangle.height, Rectangle.width)<<'\t';
    cout<<"Area: "<<area(Rectangle.height)<<'\t';
    cout<<"Area: "<<area(Rectangle)<<std::endl;
}
