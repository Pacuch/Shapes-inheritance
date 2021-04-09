#include "Shapes.h"

class ShapeContainer 
{
	std::vector<Shape*> shapes;
public: 
	void add(Shape*);
	void displayAll();
	double totalArea();
	std::vector<Shape*> getGreaterThan(double area);
};

