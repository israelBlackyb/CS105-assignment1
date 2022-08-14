// Scenario2_IsraelBlack.cpp

#include "Player.h"

class Player {
protected:
    string name;
    Race race;
    int hitPoints;
    int magicPoints;

public:
    
    string getName() {
        return name;
    }

    Race getRace(){
        return race;
    }

    string whatRace() { //switch case to take user input to select required race
        int raceInput;
        bool loop;
        cout << "Please select your chosen Race: ";
        cout << "\n1. Human \n2. Elf\n 3. Dwarf\n 4.Orc\n 5.Troll\n"; cin >> raceInput;

        while (loop) {

            switch (raceInput)
            {
            case 1:
                race = Human;
              
                break;

            case 2:
                race = Elf;
                break;

            case 3:
                race = Dwarf;
                break;

            case 4:
                race = Orc;
                break;

            case 5:
                race = Troll;
                break;

            default:
                cout << "\nInvalid input option, please try again!";
                loop = !loop;
                break;
            }
        }
    }

    int getHitPoint() {
        return hitPoints;
    }

    int getMagicPoints() {
        return magicPoints;
    }

    void setName(string name) {
        this->name = name;
    }

    void setRace(Race race){ //sets selected race as the "Race" variavble for iteration
        this->race = race;
    }

    void setHitPoints(int hitPoints) {
        this->hitPoints;
    }

    void setMagicPoints(int magicPoints) {
        this->magicPoints=magicPoints;
    }

    string attack(){
        return "No attack available";
    }

    Player(string name, Race race, int hitPoints, int magicPoints) { //constructor
        name = name;
        race = race;
        hitPoints = hitPoints;
        magicPoints = magicPoints;
    }

    Player() {

    }
};

class Warrior : public Player {
    Warrior(int hit, int magic) {
        hitPoints = hit;
        magicPoints = magic;
    }
};

class Priest : public Player {
   
    Priest(int hit, int magic) {
        hitPoints = hit;
        magicPoints = magic;
   }

    string attack() {
        return " and the attack is: I will destroy you with my sword\n";
    }
};

class Mage : public Player {
    Mage(int hit, int magic) {
        hitPoints = hit;
        magicPoints = magic;
    }
};

int main()
{
    cout << "     Character Creation\n";

}


