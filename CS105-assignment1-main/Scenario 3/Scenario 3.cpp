#include <iostream>

using std::cout;
using std::cin;

void mainMenu();
void drawLines(int length);
void drawRectangle();
void drawTriangle();
void drawCircle();

class Shapes { // Parent Class - basic measurements that all shapes contain

    
public:
    double base;
    double height;
    double result;
    

    double getData() {
        return base;
        return height;
        return result;
    }

    double calculateArea() {
        
    }

    void giveResult() {
        
    }
};

class Square { // Child Class
public:

};

class Rectangle { // Child Class

};

class Triangle { // Child Class

};

class Circle { // Child Class

};

int main()
{
    drawLines(20); //create title {
    cout << "\nShapes Calculator\n\n"; 
    drawLines(20);// }

    mainMenu();
}

void mainMenu() {
    int inputOption = 0;

    cout << "\n1. Square \n2. Rectangle \n3. Triangle \n4. Circle \n5. Exit\n\n"; cin >> inputOption;

    switch (inputOption)
    {
    case 1:

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

void drawRectangle() {

}

void drawTriangle() {

}

void drawCircle() {

}

