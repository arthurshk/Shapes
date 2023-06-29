// Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include<cmath>

using namespace std;
class Figure
{
protected:
	double x;
	double y;
	string type; 
public:
	Figure(double m_x, double m_y) : x{ m_x }, y{ m_y } {};
	virtual double area(double x, double y) { return 0; };
	Figure(double m_x, double m_y, double x = 0, double y = 0) { m_x = x; m_y = y; }
	virtual void Print() final;
	Figure() {};

};
class Rectangle : public Figure
{
public: 
	Rectangle(double x, double y)
	{
		this->x = x; this->y = y; type = " Rectangle"; 
	}
	virtual double area(double x, double y) override {
		return x * y;
	}
	Rectangle() {};
};
class Triangle : public Figure
{
public:
	Triangle(double x, double y)
	{
		this->x = x; this->y = y; type = " Triangle"; 
	}
	double area(double x, double y)override {
		return x * y / 2;
	}
	Triangle() {};
};
class Circle : public Figure
{
public:
	Circle(double x, double y)
	{
		this->x = x; this->y = y; type = " Circle";
	}
	double area(double x, double y)override {
		return pow(x, 2) * 3.14;
	}
	Circle() {};
};
class Rhombus : public Figure
{
public:
	Rhombus(double x, double y)
	{
		this->x = x; this->y = y; type = " Rhombus"; 
	}
	double area(double x, double y)override {
		return x * y / 2;
	}
	Rhombus() {};
};

void Figure::Print() 
{
	cout << " \n   My figure type is" << type << "   My area is " << area(x,y) << " inches";
}
int main()
{
	Rectangle rectangle(6.0,4.0);
	rectangle.Rectangle::Print();
	Triangle triangle(4.0,5.0);
	triangle.Triangle::Print();
	Circle circle(6.0, NULL);
	circle.Circle::Print();
	Rhombus rhombus(3.0,5.0);
	rhombus.Rhombus::Print();
}
