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

    void setRace(int i) { //sets selected race as the "Race" variavble for iteration
        this->race = (Race)i;
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
        int raceInput;
        bool loop = true;
        cout << "Please select your chosen Race: ";
        cout << "\n1. Human \n2. Elf \n3. Dwarf \n4.Orc \n5.Troll\n"; cin >> raceInput;

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
            return whatRace();
        }
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
        return " and the attack is: I will destroy you with my sword\n";
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
        return " and the attack is: I will destroy you with my sword\n";
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
        return " and the attack is: I will destroy you with my sword\n";
    }

    Mage() {}
};


void createCharacter();
void displayCharacter(vector<Warrior> w, vector<Mage> m, vector<Priest> p);





int main()
{
    int selectClass;

    Warrior newWarrior;
    Priest newPriest;
    Mage newMage;

    vector <Warrior> warriors;
    vector <Priest> priests;
    vector <Mage> mages;

    string name;
    Race raceNumber=Human;

    cout << "Choose from the following: \n\t1. Warrior \n\t2. Priest \n\t3. Mage \n\t4. Finish Creating characters"; cin >> selectClass;

    switch (selectClass)
    {
    case 1:
        cin >> name;
        newWarrior.setName(name);
        newWarrior.setRace(raceNumber);
        newWarrior.setHitPoints(200);
        newWarrior.setMagicPoints(0);
        warriors.push_back(newWarrior);
        break;
    case 2:
        cin >> name;
        newPriest.setName(name);
        newPriest.setRace(raceNumber);
        newPriest.setHitPoints(100);
        newPriest.setMagicPoints(200);
        priests.push_back(newPriest);
        break;
    case 3:
        cin >> name;
        newMage.setName(name);
        newMage.setRace(raceNumber);
        newPriest.setHitPoints(200);
        newPriest.setMagicPoints(0);
        mages.push_back(newMage);
        break;
    case 4:
      
        break;
    default:
        break;
    }

    displayCharacter(warriors, mages, priests); //iterate through child class vectors
}

void displayCharacter(vector<Warrior> w, vector<Mage> m, vector<Priest> p) {
    cout << "\nCharacter creation goes here";
    for (Warrior warrior : w) {
        cout << warrior.getName();
        cout << warrior.getRace();
        cout << warrior.getHitPoints();
        cout << warrior.getMagicPoints();
    }
    for (Mage mage : m) {
        cout << mage.getName();
        cout << mage.getRace();
        cout << mage.getHitPoints();
        cout << mage.getMagicPoints();
    }
    for (Priest priest : p) {
        cout <<priest.getName();
        cout << priest.getRace();
        cout << priest.getHitPoints();
        cout << priest.getMagicPoints();
    }
}


