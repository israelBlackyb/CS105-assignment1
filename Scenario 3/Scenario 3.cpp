#include "Header.h"



class Shapes { // Parent Class - basic measurements that all shapes contain
private:
    double base=0;
    double height=0;
    double radius = 0;

protected:
    double input;

protected:
    const double pi = 3.141;
    double calcResult = 0;
    double result = 0;

public:

    void setData(int i) {
        input = i;
    }

    double getData() {
        cin >> input;
        return input;
    }

    double calculateArea(double height, double base) {   //base function to be overridden
        cout << "Enter Height of Shape: ";
        height = getData();
        setData(input);

        cout << "Enter Width of Rectangle: ";
        base = getData();
        setData(input);

        result = (height + base) * 2;
        calcResult = result; //acts as placeholder so result can be output and still used
        giveResult();
        return calcResult;
    }

    double calculatePerimeter(double height, double base) { //place holder for future overloaded functions
        cout << "\nEnter Height in Centimeters: "; height = getData();
        double perimeter = height * 4;
        setData(perimeter);
        return perimeter;
        giveResult();
    }

    void giveResult() {
        cout << "The result is: " << calcResult; cout << " centimeters squared (Cm Sq)\n";
    }
};

class Squares : public Shapes { // Child Class
    
public:
    double calculateArea(double height, double base) { //overridden function
        cout << "Enter One Side of Square: ";
        height = getData();
        setData(input);

        result = height * height;
        calcResult = result; 
        giveResult();
        return calcResult;
    }

    double calculatePerimeter(double height) { //overloaded function 
        height = getData();
        setData(input);
        result = height * 4;
        calcResult = result;
        giveResult();
        return calcResult;
    }
};

class Rectangle : public Shapes { // Child Class
public:
    double calculateArea(double height, double base) { //overridden function
        cout << "Enter Height of Rectangle: ";
        height = getData();
        setData(input);

        cout << "Enter Width of Rectangle: ";
        base = getData();
        setData(input);

        result = height * base;
        calcResult = result; 
        giveResult();
        return calcResult;
    }

    double calculatePerimeter(double height, double base) { //overloaded function 
        cout << "\nEnter Height of Rectangle: ";
        height = getData(); setData(input);
        
        cout << "\nEnter Width of Rectangle: ";
        base = getData(); setData(input);
        result = (height + base)*2;

        calcResult = result;
        giveResult();
        return calcResult;
    }
};

class Triangle : public Shapes { // Child Class
    double longSide;
public:
    double calculateArea(double height, double base) { //overridden function
        cout << "Enter Height of Triangle: ";
        height = getData();
        setData(input);

        cout << "Enter Width of Triangle: ";
        base = getData();
        setData(input);


        result = (height * base) / 2;
        calcResult = result; 
        giveResult();
        return calcResult;
    }

    double calculatePerimeter(double height, double width) { //overloaded function 
        cout << "Enter the Width  of the Triangle in Centimeters: "; 
        width = getData(); setData(input);
        cout << "Enter the Height of the Triangle in Centimeters: "; 
        height = getData(); setData(input);
        longSide = (pow(width, 2) + pow(width, 2));

        result = width + height + longSide;
        calcResult = result;
        giveResult();
        return calcResult;
        
    }
};

class Circle : public Shapes { // Child Class
public: 
    double calculateArea(double radius) { //calculate area of circle - an overloaded func
        cout << "Enter Radius of circle: ";
        radius = getData();
        setData(input);
        result = pi * pow(radius, 2);
        calcResult = result;
        giveResult();
        return calcResult;
    }

    double calculatePerimeter(double radius) { //overloaded function 
        cout << "Enter the Radius of the Circle in Centimeters: "; 
        radius = getData();
        setData(input);
        result = 2 * pi * radius;
        calcResult = result;
        giveResult();
        return calcResult;
       
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

void mainMenu() { //menu for accessing other menus, acts as a anchor point
    int inputOption = 0;
    cout << "\n"; drawLines(20); cout << "\nMain Menu\n\n"; drawLines(20);
    cout << "\n1. Square \n2. Rectangle \n3. Triangle \n4. Circle \n5. Exit\n\n"; cin >> inputOption;

    switch (inputOption)
    {
    case 1:
        menuSquare();
        break;

    case 2:
        menuRectangle();
        break;

    case 3:
        menuTriangle();
        break;

    case 4:
        menuCircle();
        break;
     
    case 5:
        exit;
        break;
    default:
        cout << "\nInvalid Option, please input the following: \n";
        mainMenu();
        break;
    }
}

void menuSquare() {
    int inputOption = 0;
    double height=0; 
    double base=0; 
    Squares square;
    double input;

    drawLines(20); cout << "\nSqaure Calculator\n"; drawLines(20);
    cout << "\n\n"; drawSquare();

    cout << "Select from following options: \n";
    cout << "1. Area (Area = height * height sq.units)\n";
    cout << "2. Perimeter (Perimeter = 4 * height sq.units)\n";
    cout << "3. Go back to Main Menu (Shapes Calculator)\n\n";
    cout << "Please choose your option between 1 and 3: "; cin >> inputOption;

    switch (inputOption)
    {
    case 1:

        cout << "\n\nPlease Enter One Side of the Square in centimeteres: ";
        square.calculateArea(height, base); //overridden function
        drawLines(45);
        drawLines(45);
        cout << "\n\n\n";
        menuSquare();
        break;
    case 2:
        cout << "\n\nPlease Enter One Side of the Square in centimeteres: ";
        square.calculatePerimeter(height); //same as in the parent class place holder
        break;

    case 3:
        mainMenu();
        break;
    default:
        cout << "\nInvalid Option. Please select from options 1-3";
        menuSquare();
        break;
    }
}

void menuRectangle() {
    int inputOption = 0;
    double height = 0; 
    double base = 0; 
    Rectangle rectangle;
    double input;



    drawLines(20); cout << "\nRectangle Calculator\n"; drawLines(20);
    cout << "\n\n"; drawRectangle();

    cout << "Select from following options: \n";
    cout << "1. Area (Area = Height x Width sq.units)\n";
    cout << "2. Perimeter (Perimeter = (Height + Width) x 2 sq.units)\n";
    cout << "3. Go back to Main Menu (Shapes Calculator)\n\n";
    cout << "Please choose your option between 1 and 3: "; cin >> inputOption;

    switch (inputOption)
    {
    case 1:
        rectangle.calculateArea(height, base); //overridden function
        drawLines(45);
        drawLines(45);
        cout << "\n\n\n";
        menuRectangle();
        break;
    case 2:
        rectangle.calculatePerimeter(height, base); //overriden function
        menuRectangle();
        break;

    case 3:
        mainMenu();
        break;
    default:
        cout << "\nInvalid Option.\n\n";
        menuRectangle();
        break;
    }
}

void menuTriangle() { //Measures ONLY Right Angle Triangles
    int inputOption = 0;
    double height = 0; 
    double base = 0;
    Triangle triangle;
    double input;

 

    drawLines(20); cout << "\nTriangle Calculator\n"; drawLines(20);
    cout << "\n\n"; drawTriangle(); cout << "Right Angles\n"; drawLines(20);

    cout << "\n\nSelect from following options: \n";
    cout << "1. Area (Area = height * height sq.units)\n";
    cout << "2. Perimeter (Perimeter = 4 * height sq.units)\n";
    cout << "3. Go back to Main Menu (Shapes Calculator)\n\n";
    cout << "Please choose your option between 1 and 3: "; cin >> inputOption;

    switch (inputOption)
    {
    case 1:
        cout << "\n\nPlease Enter Height of the Triangle in centimeteres: ";
        triangle.calculateArea(height, base); 
        drawLines(45);
        drawLines(45);
        cout << "\n\n\n";
        menuTriangle();
        break;

    case 2:
        cout << "\n\nPlease Enter One Side of the Square in centimeteres: ";
        triangle.calculatePerimeter(height, base);
        menuTriangle();
        break;

    case 3:
        mainMenu();
        break;

    default:
        cout << "\nInvalid Option. Please select from options 1-3";
        menuTriangle();
        break;
    }
}

void menuCircle() {
    int inputOption;
    double radius=0;
    Circle circle;
    double input;

  

    drawLines(20); cout << "\nTriangle Calculator\n"; drawLines(20);
    cout << "\n\n"; drawCircle(); 

    cout << "\n\nSelect from following options: \n";
    cout << "1. Area (Area = height * height sq.units)\n";
    cout << "2. Perimeter (Perimeter = 4 * height sq.units)\n";
    cout << "3. Go back to Main Menu (Shapes Calculator)\n\n";
    cout << "Please choose your option between 1 and 3: "; cin >> inputOption;

    switch (inputOption)
    {
    case 1:
        circle.calculateArea(radius);
        drawLines(45);
        drawLines(45);
        cout << "\n\n\n";
        menuCircle();
        break;

    case 2:
        circle.calculatePerimeter(radius);
        menuCircle();
        break;

    case 3:
        mainMenu();
        break;

    default:
        cout << "\nInvalid Option. Please select from options 1-3";
        menuCircle();
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

