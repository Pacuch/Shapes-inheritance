#include"ShapeContainer.h"
#include <iostream>

int main()
{
    ShapeContainer shapes;
	while (true) {
		int choose, howMany = 0;
        std::cout << "------------------------------------\n";
        std::cout << "Wybierz kszalt do dodania do tablicy\n";
        std::cout << "------------------------------------\n";
        std::cout << "     0 - Wyjscie                    \n";
        std::cout << "     1 - Rectangle                  \n";
        std::cout << "     2 - Square                     \n";
        std::cout << "     3 - Circle                     \n";
        std::cout << "     4 - Ellipse                    \n";
        std::cout << "     5 - Wyswietl wszystkie         \n";
        std::cout << "     6 - Suma pol                   \n";
        std::cout << "     7 - Wyswietl wieksze od        \n";
        std::cout << "------------------------------------\n";

        std::cin >> choose;
        if (choose == 0) {
            break;
        }
        else if (choose > 7) {
            continue;
        }
        else if (choose == 1 or choose == 2 or choose == 3 or choose == 4) {
            std::cout << "------------------------------------\n";
            std::cout << "              Ile?                  \n";
            std::cout << "------------------------------------\n";
            std::cin >> howMany;
            std::cout << "------------------------------------\n";
            std::cout << "         Podaj parametry:           \n";
            std::cout << "------------------------------------\n";
        }
        std::string name;
        double a, b;

        switch (choose) {
        case 1: {
            for (int i = 0; i < howMany; i++) {
                std::cout << "------------------------------------\n";
                std::cout << "           nazwa a b                \n";
                std::cout << "------------------------------------\n";
                std::cin >> name >> a >> b;
                shapes.add(new Rectangle(name, a, b));
            }
            break;
        }
        case 2: {
            for (int i = 0; i < howMany; i++) {
                std::cout << "------------------------------------\n";
                std::cout << "           nazwa a                 \n";
                std::cout << "------------------------------------\n";
                std::cin >> name >> a;
                shapes.add(new Square(name, a));
            }
            break;
        }
        case 3: {
            for (int i = 0; i < howMany; i++) {
                std::cout << "------------------------------------\n";
                std::cout << "           nazwa a                \n";
                std::cout << "------------------------------------\n";
                std::cin >> name >> a;
                shapes.add(new Circle(name, a));
            }
            break;
        }
        case 4: {
            for (int i = 0; i < howMany; i++) {
                std::cout << "------------------------------------\n";
                std::cout << "           nazwa a b                \n";
                std::cout << "------------------------------------\n";
                std::cin >> name >> a >> b;
                shapes.add(new Ellipse(name, a, b));
            }
            break;
        }
        case 5: {
            std::cout << "------------------------------------\n";
            std::cout << "         wyswietlam wszystkie       \n";
            std::cout << "------------------------------------\n";
            shapes.displayAll();
            break;
        }
        case 6: {
            std::cout << "------------------------------------\n";
            std::cout << "         wyswietlam calkowite pole  \n";
            std::cout << "------------------------------------\n";
            std::cout << shapes.totalArea() << std::endl;
            break;
        }
        case 7: {
            std::cout << "------------------------------------\n";
            std::cout << "          podaj liczbe             \n";
            std::cout << "------------------------------------\n";
            double s = 0;
            std::cin >> s;
            std::cout << "------------------------------------\n";
            std::cout << "         wyswietlam wieksze od      \n";
            std::cout << "------------------------------------\n";
            std::vector<Shape*> x = shapes.getGreaterThan(s);
            for (auto& shape : x)
                shape->display();
            break;
        }
        }

	}

}

