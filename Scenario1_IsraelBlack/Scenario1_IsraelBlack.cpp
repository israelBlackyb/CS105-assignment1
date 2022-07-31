 #include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;
using std::stringstream;


class Location {
public:
    int degreesLong=0; int degreesLat=0;
    float minutesLong=0; float minutesLat=0;
    char directionLong = 'E'; char directionLat = 'N';
    void getpos() {
    //latitude
        cout << "Enter latitude measurements: "; 
        cout << "\nInput Degrees between 0 and 90: "; cin >> degreesLat; cout << degreesLat;
        cout << "\nInput Minutes: "; cin >> minutesLat;
        cout << "\nInput Direction (N/S): ";  cin >> directionLat; 
        cout << "\n**********************\n\n";

    //longitude
        cout << "Enter Longitude measurements: \n";
        cout << "Input Degrees between 0 and 180: \n"; cin >> degreesLong;
        cout << "Input Minutes: \n"; cin >> minutesLong;
        cout << "Input Direction (E/W): \n"; cin >> directionLong; 
        cout << "**********************\n**********************\n\n";

        //checking user inputs

        if (directionLat == 'n') {
            directionLat = 'N';
        }
        
        else if (directionLat == 's') {
            directionLat = 'S';
        }

        if (directionLong == 'e') {
            directionLong = 'E';
        }

        else if (directionLong == 'w') {
            directionLong = 'W';
        }
       

        if (directionLat != 'N' && directionLat != 'S')
 {
            cout << "Incorrect input, please enter correct Direction";
            directionLat = 'A';
            getpos();
        }

        else {
            directionLat = directionLat;
        }

        if (degreesLat > 90 && degreesLat <0) {
            cout << "Incorrect input, please enter Degrees within range\n";
            getpos();
        }

        if (minutesLat > 60 && minutesLat < 0) {
            cout << "Incorrect input, please enter Minutes greater than 0\n";
            getpos();
        }

        if (directionLong != 'E' && directionLong != 'W') {
            cout << "Incorrect input, please enter correct Direction\n";
            directionLong = 'E';
            getpos();
        }

        if (degreesLong > 90 && degreesLong < 0) {
            cout << "Incorrect input, please enter Degrees within range\n";
            getpos();
        }

        if (minutesLong > 60 && minutesLong < 0) {
            cout << "Incorrect input, please enter Minutes greater than 0\n";
            getpos();
        }
    }

    Location() {
        
    }
};

class Yacht {
    Location location;
    
public:
    int yachtNumber;
    void get_pos(){ //get position from user and store it in object
        location.getpos();
        cout<<"\nIt's a test: " << location.minutesLat<<endl;
    }

    void display() { //report yacht number and location
        cout << "\n and its position is: " << location.degreesLat << "\xF8" << location.minutesLat << "' " << location.degreesLat<<" in latitude\n";
        cout << location.degreesLong << "\xF8" << location.minutesLong << "' " << location.degreesLong << " in longitude\n";
       
    
    }

    Yacht(int yachtNum) {
        yachtNumber = yachtNum;
    }

    Yacht() {
        
    }
};

int main()
{
    Yacht newYacht;
    cout << "*************Oceans Race 2021-2022***********" << endl;
    cout << "\n***********************" << endl;
    
    for (int i = 1; i <= 3; i++) {
        cout << "Create yacht " << i << endl;
        newYacht.get_pos();
    }

    vector <Yacht*> Yachts;

    for (int i = 0; i < 3; i++) {
     
        Yachts.push_back(new Yacht(i+1));
    }
    
    for (Yacht* yacht : Yachts) {
        cout << "The ship serial number is: ";
        cout << yacht->yachtNumber<<endl;
        yacht->display();
    }
}