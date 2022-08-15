// Scenario2_IsraelBlack.cpp

#include "Player.h"



class Player {
protected:
    string name;
    Race race;
    int hitPoints;
    int magicPoints;

public:

    void setName(string name) {
        this->name = name;
    }

    void setRace(int r) { //sets selected race as the "Race" variavble for iteration
 
        this->race = (Race)r;
        
    }

    void setHitPoints(int hitPoints) {
        this->hitPoints = hitPoints;
    }

    void setMagicPoints(int magicPoints) {
        this->magicPoints = magicPoints;
    }

    string getName() {
        return name;
    }

    Race getRace() {
        return race;
    }

    string whatRace() { //switch case to take user input to select required race
        string raceSelect="";
        
            switch (race)
            {
            case Human:
                raceSelect = "HUMAN";

                break;

            case 2:
                raceSelect = "ELF";
                break;

            case 3:
                raceSelect = "DWARF";
                break;

            case 4:
                raceSelect = "ORC";
                break;

            case 5:
                raceSelect = "TROLL";
                break;

            default:
                cout << "\nInvalid input option, please try again!";
                whatRace();
                break;
            }
            return raceSelect;
    }

    int getHitPoints() {
        return hitPoints;
    }

    int getMagicPoints() {
        return magicPoints;
    }

    string attack() {
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
public:
    Warrior(int hit, int magic) {
        hitPoints = hit;
        magicPoints = magic;
    }
    string attack() {
        return " I will destroy you with my sword\n";
    }

    Warrior() {

    }
};

class Priest : public Player {
public:

    Priest(int hit, int magic) {
        hitPoints = hit;
        magicPoints = magic;
    }
    string attack() {
        return "I  will assault you with my holy wrath!\n";
    }

    Priest() {}
};

class Mage : public Player {
public:
    Mage(int hit, int magic) {
        hitPoints = hit;
        magicPoints = magic;
    }
    string attack() {
        return " I will crush you with my arcane missiles!\n";
    }

    Mage() {}
};


void createCharacter();
void displayCharacter(vector<Warrior> w, vector<Mage> m, vector<Priest> p);

int main()
{
    

    Warrior newWarrior;
    Priest newPriest;
    Mage newMage;

    vector <Warrior> warriors;
    vector <Priest> priests;
    vector <Mage> mages;

    int selectClass = 0;
    string name;
    int raceChoose=0;

    cout << "******************************\nWelcome to character creation!\n******************************\n";

    while (selectClass != 4) {
        cout << "\nChoose from the following: \n\t1. Warrior \n\t2. Priest \n\t3. Mage \n\t4. Finish Creating characters \nChoose: "; cin >> selectClass;
        if (selectClass != 4) {

            cout << "\nPlease select your chosen Race: ";
            cout << "\n1. Human \n2. Elf \n3. Dwarf \n4. Orc \n5. roll\n"; cin >> raceChoose;

            cout << "Please Sleect a Name for your character: "; cin >> name;

            switch (selectClass)
            {
            case 1:

                newWarrior.setName(name);
                newWarrior.setRace((Race)raceChoose);
                newWarrior.setHitPoints(200);
                newWarrior.setMagicPoints(0);
                warriors.push_back(newWarrior);
                break;
            case 2:
                newPriest.setName(name);
                newPriest.setRace((Race)raceChoose);
                newPriest.setHitPoints(100);
                newPriest.setMagicPoints(200);
                priests.push_back(newPriest);
                break;
            case 3:
                newMage.setName(name);
                newMage.setRace((Race)raceChoose);
                newPriest.setHitPoints(200);
                newPriest.setMagicPoints(0);
                mages.push_back(newMage);
                break;
            default:
                break;
            }
        }
    }

    displayCharacter(warriors, mages, priests); //iterate through child class vectors
}

void displayCharacter(vector<Warrior> w, vector<Mage> m, vector<Priest> p) {
    for (Warrior warrior : w) {
        cout << "\nI am a WARRIOR with name "<< warrior.getName()<< " and with race "<< warrior.whatRace() << " and my attack is: "<< warrior.attack();
    }
    for (Mage mage : m) {
        cout << "\nI am a MAGE with name " << mage.getName() << " and with race " << mage.whatRace() << " and my attack is: " << mage.attack();
    }
    for (Priest priest : p) {
        cout << "\nI am a PRIEST with name " << priest.getName() << " and with race " << priest.whatRace() << " and my attack is: " << priest.attack();
    }
}


