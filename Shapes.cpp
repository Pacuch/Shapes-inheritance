#include"Shapes.h"

//Shape
Shape::Shape(std::string name) 
	: name(name) 
{
	std::cout << "Konstruktor Shape" << std::endl;
}

Shape::~Shape()
{
	std::cout << "Destruktor Shape" << std::endl;
}

Shape::Shape()
{
	std::cout << "Domyslny Shape" << std::endl;
}

void Shape::setName() 
{
	 this->name = name;
}

//Square
Square::Square(std::string name, double side) 
	: side(side), Shape(name)
{
	std::cout << "Konstruktor Square" << std::endl;
}

Square::Square()
{
	std::cout << "Domyslny Square" << std::endl;
}

Square::~Square()
{
	std::cout << "Destruktor Square" << std::endl;
}

double Square::area() {
	return side * side;
}
double Square::perimeter() {
	return 4 * side;
}
void Square::display() {
	std::cout << getName() << " " << area() << std::endl;
}

//Circle
Circle::Circle(std::string name, double radius) 
	: radius(radius), Shape(name){
	std::cout << "Konstruktor Circle" << std::endl;
}
Circle::Circle(){
	std::cout << "Domyslny Circle" << std::endl;
}
Circle::~Circle() {
	std::cout << "Destruktor Circle" << std::endl;
}
double Circle::area() {
	return M_PI * pow(radius, 2);
}
void Circle::display() {
	std::cout << getName() << " " << area() << std::endl;
}

double Circle::perimeter() {
	return 2* M_PI* radius;
}

//Rectangle
Rectangle::Rectangle(std::string name, double sideA, double sideB)
	: sideA(sideA), sideB(sideB), Shape(name) {
	std::cout << "Konstruktor Rectangle" << std::endl;
}
Rectangle::Rectangle() {
	std::cout << "Domyslny Rectangle" << std::endl;
}
Rectangle::~Rectangle() {
	std::cout << "Destruktor Rectangle" << std::endl;
}
double Rectangle::area() {
	return sideA * sideB;
}
double Rectangle::perimeter() {
	return 2 * sideA + 2 * sideB;
}
void Rectangle::display() {
	std::cout << getName() << " " << area() << std::endl;
}

//Elipse
Ellipse::Ellipse(std::string name, double diagonalA, double diagonalB)
	: diagonalA(diagonalA), diagonalB(diagonalB), Shape(name) 
	{
	std::cout << "Konstruktor Ellipse" << std::endl;
}
Ellipse::Ellipse() {
	std::cout << "Domyslny Ellipse" << std::endl;
}
Ellipse::~Ellipse() {
	std::cout << "Destruktor Ellipse" << std::endl;
}
double Ellipse::area() {
	return M_PI * diagonalA * diagonalB;
}
double Ellipse::perimeter() {
	return 3 / 2 * (diagonalA + diagonalB - sqrt(diagonalA * diagonalB));
}
void Ellipse::display() {
	std::cout << getName() << " " << area() << std::endl;
}