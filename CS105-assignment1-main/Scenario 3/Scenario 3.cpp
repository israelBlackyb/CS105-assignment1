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
    double base=0;
    double height=0;
    double radius=0;
    double result=0;
    double calcResult=0;

protected:
    const double pi = 3.141;

public:
    double getData() {
        double input = 0;
        cin >> input;
        return input;
    }

    double setData(double input) {
        calcResult = input;
    }

    double calculateArea(double height, double base) {   //calculates for square and rectangle
        double result = 0;
        result = height * base;
        setData(result);
        return result;
    }

    double calculateArea(double radius) {
        double result = 0;
        result = pi * (radius * radius);
        setData(result);
        return result;
        giveResult();
    }

    double calculatePerimeter(double height, double base) {
        cout << "\nEnter Height in Centimeters: "; height = getData();
        double perimeter = height * 4;
        setData(perimeter);
        return perimeter;
        giveResult();
    }

    void giveResult() {
        cout << "The result is: ";  calcResult; cout << " centimeters squared (Cm Sq)\n";
    }

    void shapeMenu(double perimeter) {
        int shapeMenuInput;
        cout << "\n1. Area (area = base * base sq.units)\n";
        cout << "\n2. Perimeter (Perimeter = 4 * base sq.units)\n";
        cout << "\n3. Go back to main menu\n";
        cin >> shapeMenuInput;
    }

};

class Squares : public Shapes { // Child Class
    
public:
    double calculatePerimeter(double height, double base) {
        cout << "\nEnter Height in Centimeters: "; height = getData();
        double perimeter = height * 4;
        setData(perimeter);
        return perimeter;
        giveResult();
    }
};

class Rectangle : public Shapes { // Child Class
public:
    double calculatePerimeter(double height, double base) {
        cout << "\nEnter Height in Centimeters: ";  height = getData();
        cout << "\nEnter Base in Centimeters: "; base = getData();
        double perimeter = (height * base)*2;
        setData(perimeter);
        return perimeter;
        giveResult();
    }
};

class Triangle : public Shapes { // Child Class
public:
    double calculatePerimeter(double sideA, double sideB, double sideC) {
        cout << "Enter the Side 1 of the Triangle in Centimeters: "; sideA = getData();
        cout << "Enter the Side 2 of the Triangle in Centimeters: "; sideB = getData();
        cout << "Enter the Side 3 of the Triangle in Centimeters: "; sideC = getData();
        double perimeter = sideA + sideB + sideC;
        setData(perimeter);
        return perimeter;
        giveResult();
    }
};

class Circle : public Shapes { // Child Class
public: 
    double calculatePerimeter(double radius) {
        cout << "Enter the Radius of the Circle in Centimeters: "; radius = getData();
        double perimeter = 2 * pi * radius;
        setData(perimeter);
        return perimeter;
        giveResult();
    }

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
    int inputOption = 0;
    Squares square;



    cout << "\n1. Square \n2. Rectangle \n3. Triangle \n4. Circle \n5. Exit\n\n"; cin >> inputOption;

    switch (inputOption)
    {
    case 1:

        break;

    case 2:
        drawRectangle();
        break;

    case 3:
        drawTriangle();
        break;

    case 4:
        drawCircle();
        break;
     
    case 5:
        break;
    default:
        cout << "\nInvalid Option, please input the following: \n";
        mainMenu();
        break;
    }
}

void menuSquare() {

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

void drawRectangle() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            drawLines(1); cout << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";
}

void drawTriangle() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < i; j++) {
            drawLines(1); cout << " ";
        }
        cout << "\n";
    }
    cout << "\n\n";
}

void drawCircle() {
    cout << "           ******    \n";
    cout << "         *        *  \n";
    cout << "        *          *\n";
    cout << "        *          *\n";
    cout << "        *          *\n";
    cout << "         *        *  \n";
    cout << "           ******    ";
}

