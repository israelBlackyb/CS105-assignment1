 #include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;


class Location {
    int degrees;
    float minutes;
    char direction;

public:

    void getpos() {
        cout << "\n\nInput degrees between 0 and 180: "; //Latitude
        cout << "\nInput mintues between 0 and 60: ";
        cout << "\nInput direction(N/S/E/W): ";

        cout << "\n\nInput degrees between 0 and 180: "; //Longitude
        cout << "\nInput mintues between 0 and 60: ";
        cout << "\nInput direction(N/S/E/W): ";
    }

    Location(int dgrs= 0, float mins= 0, char drct= 'a') {
        degrees = dgrs;
        minutes = mins;
        direction = drct;
    }

};

class Yacht : public Location {
    int yachtNumber;
    Location location;
    
public:
    void get_pos(){
        location.getpos();
    }

    Yacht  (int yachtNum, Location loc) {
        yachtNumber = yachtNum;
        location = loc;
    }
};

int main()
{
    
}

