#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void mainMenu();
void drawLines(int length);
void drawSquare();
void drawRectangle();
void drawTriangle();
void drawCircle();

class Shapes { // Parent Class - basic measurements that all shapes contain
private:
    double base;
    double height;
    double result;

public:
    double getData() {
        return base;
        return height;
        return result;
    }

    double calculateArea() {
        double area = base*base;
        return area;
    }

    double calculatePerimeter() {

    }

    void giveResult(int area) {
        cout << "The result is: " << area << " square centimeters (sq.cm)";
    }

    void shapeMenu(string var1, string var2) {
        int shapeMenuInput;
        cout << "\n1. Area (area = " << var1 << " * " << var2 << " sq.units)\n";
        cout << "\n2. Perimeter ()\n";
        cout << "\n3. Go back to main menu\n";

        cin >> shapeMenuInput;
    }

};

class Squares : public Shapes { // Child Class
    
public:
    

    double calculateArea(double base) {
        double area = base * base;
        return area;
        giveResult(area);
   }

    double calculatePerimeter(double height) {
        double perimeter = height * 4;
        return perimeter;
        giveResult(perimeter);
    }
};

class Rectangle : public Shapes { // Child Class
public:

    double calculateArea(double base) {
        double area = base * base;
        return area;
        giveResult(area);
    }

    double calculatePerimeter(double height) {
        double perimeter = height * 4;
        return perimeter;
        giveResult(perimeter);
    }
};

class Triangle : public Shapes { // Child Class

};

class Circle : public Shapes { // Child Class

};

int main()
{
    drawLines(20); //create title {
    cout << "\nShapes Calculator\n\n"; 
    drawLines(20);// }
    cout << "\n\n";
    

    mainMenu();
}

void mainMenu() {
    int area;
    int perimeter;
    int inputOption = 0;
    Squares square;



    cout << "\n1. Square \n2. Rectangle \n3. Triangle \n4. Circle \n5. Exit\n\n"; cin >> inputOption;

    switch (inputOption)
    {
    case 1:
        drawSquare();
        
        
        break;

    case 2:

        break;

    case 3:

        break;

    case 4:
        
        break;
     
    case 5:
        break;
    default:
        cout << "\nInvalid Option, please input the following: \n";
        mainMenu();
        break;
    }
}

void drawLines(int length) {
    for (int i = 0; i < length; i++) {
        cout << "*";
     }
}

void drawSquare() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
          drawLines(1); cout << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";
}


