#include"ShapeContainer.h"

void ShapeContainer::add(Shape* shape) {
	shapes.push_back(shape);
}

void ShapeContainer::displayAll() {
	for (int i = 0; i < shapes.size(); i++) {
		std::cout << shapes[i]->getName() << " " << shapes[i]->area() << std::endl;
	}
}

double ShapeContainer::totalArea() {
	double total = 0;
	for (int i = 0 ; i < shapes.size(); i++) {
		total+=shapes[i]->area();
	}
	return total;
}

std::vector<Shape*> ShapeContainer::getGreaterThan(double area) {
	std::vector<Shape*> correct;
	for (int i = 0; i < shapes.size(); i++) {
		if (shapes[i]->area() > area) {
			correct.push_back(shapes[i]);
		}
	}
	return correct;
}