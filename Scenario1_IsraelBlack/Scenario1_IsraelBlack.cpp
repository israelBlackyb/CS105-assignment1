 #include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::vector;


class Location {
    int degreesLong, degreesLat;
    float minutesLong, minutesLat;
    char directionLong, directionLat;

public:

    void getpos() {
    //latitude
        cout << "Enter latitude measurements: "; 
        cout << "\nInput Direction (N/S): ";  cin >> directionLat;
        cout << "\nInput Degrees between 0 and 90: "; cin >> degreesLat;
        cout << "\nInput Minutes: "; cin >> minutesLat;
        cout << "\n**********************\n\n";
    //longitude
        cout << "Enter Longitude measurements: \n";
        cout << "Input Direction (E/W): \n"; cin>>directionLong;
        cout << "Input Degrees between 0 and 180: \n"; cin >> degreesLong;
        cout << "Input Minutes: \n"; cin >> minutesLong;
        cout << "**********************\n**********************\n\n";

        //checking user inputs

        

        if (directionLat != 'N' || directionLat != 'S' || directionLat != 'n' || directionLat != 's') {
            cout << "Incorrect input, please enter correct Direction";
            directionLat = 0;
            getpos();
        }

        if (degreesLat < 90 || degreesLat >0) {
            cout << "Incorrect input, please enter Degrees within range\n";
            getpos();
        }

        if (minutesLat < 60 || degreesLat> 0) {
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
    void get_pos(){
        location.getpos();
    }

    Yacht  (int yachtNum) {
        yachtNumber = yachtNum;
    }

    Yacht() {}
};

int main()
{
    Yacht newYacht;
    cout << "*************Oceans Race 2021-2022***********" << endl;
    cout << "\n***********************" << endl;
    
    for (int i = 0; i < 3; i++) {
        newYacht.get_pos();
    }

    Yacht;
    vector <Yacht*> Yachts;

    for (int i = 0; i < 3; i++) {
        Yachts.push_back(new Yacht(i+1));
    }
    
    for (Yacht* yacht : Yachts) {
        cout << yacht->yachtNumber;
    }
}

