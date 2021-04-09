#pragma once
#include<iostream>
#include <vector>
#include <cmath>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

//Shape
class Shape
{
	std::string name;
public:
	Shape(std::string name);
	Shape();
	~Shape();
	virtual double area() = 0;  //pole
	virtual double perimeter() = 0;   //obwód
	virtual void display() = 0;

	virtual void setName();
	virtual std::string getName() { return name; }

};

//Square
class Square 
	:public Shape
{
	double side;
public:
	Square(std::string name, double side);
	Square();
	~Square();
	
	double area();
	double perimeter();
	void display();

};

//Circle
class Circle 
	:public Shape
{
	double radius;
public:
	Circle(std::string name, double radius);
	Circle();
	~Circle();
	double area();
	double perimeter();
	void display();
};

//Elipse
class Ellipse 
	:public Shape
{
	double diagonalA, diagonalB;
public:
	Ellipse(std::string name, double diagonalA, double diagonalB);
	Ellipse();
	~Ellipse();
	double area();
	double perimeter();
	void display();
};

class Rectangle
	:public Shape
{
	double sideA, sideB;
public:
	Rectangle (std::string name, double sideA, double sideB);
	Rectangle();
	~Rectangle();
	double area();
	double perimeter();
	void display();
};


