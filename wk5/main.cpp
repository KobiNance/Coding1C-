//Kobi Nance wk 5 spring 2026
//classes

#include <iostream>
#include <string>
using namespace std;

//classes are custom variable types that have their own member variables and member functions

//constructors
//getters and setters (privacy)
//instances
//inheritance (not today though)

//this is my new variable type
class robot {
private:
    string name;
    int charge;
    int boredom;

    public:

    //a constructor accepts variables and sets up the robot when its created
    //a constructor function needs no return type, and must be named same as class
    robot(string givenName, int givenCharge, int givenBoredom) {
        name = givenName;
        charge = givenCharge;
        boredom = givenBoredom;
        status();
    }

    //overload the constructor
    robot() {
        name = "bot";
        charge = 10;
        boredom = 0;
        status();
    }

    void status() {
        cout << "my name is " << name << ", my charge is " << charge << ".\n";
    }         // dont forget the semicolon at the end

    void newDay() {
        boredom += 2;

        if(boredom < 5) {
            cout << "happy";
        }
        else if(boredom < 10) {
            cout << "bored";
        }
        else if(boredom < 15) {
            cout << "frustrated";
        }
        else {
            cout << "ENRANGED";
        }

        cout << ".\n";
    }

    void play() {
        boredom -= 1;
    }

    //setter
    void setName(string givenName) {
        if(givenName.size() < 5) {
            name = givenName;
        }
        else {
            cout << "error: name is too long.\n";
        }
    }
    void setCharge(int givenCharge) {
        if(givenCharge < 0) {
            givenCharge = 0;
        }

        else if(givenCharge > 100) {
            charge = 100;
        }

        else {
            charge = givenCharge;
        }
    }
string getName() {
    return name;
}

int getCharge() {
    return charge;
}

int getBoredom() {
    return boredom;
}

};
int main() {
    cout << "lets build some classes!\n";

    //creating the two new variables of the type robot
    robot artoo("R2-D2", 45, 10);
    //artoo.name = "R2-D2";
    //artoo.charge = 45;
   // artoo.boredom = 10;
    robot threepio;
    threepio.setName("C-3P0");
    threepio.setCharge(2);

    cout << "here's artoo: " << artoo.name << ".\n";

    cout << artoo.name << " Notices that " << threepio.name;
    cout << " doesn't have that much battery left. lets fix that!\n";

    while(threepio.charge < 15) {
        artoo.charge -= 1;
        threepio.charge += 1;
    }

    cout << "threepio's charge is now " << threepio.charge << ".\n";
    cout << "artoo's charge is now " << artoo.charge << ".\n";


    //using member functions 
    artoo.status();
    threepio.status();

    string input = "";
    int turns = 0;

    while(true) {
        while(turns < 3) {
            cout << "what would you like to do?\n";
            getline(cin, input);

            if(input == "play") {
                cout << "lets play with " << artoo.name << "!\n";
                artoo.play();
            }
            else if(input == "status") {
                artoo.status();

            }
            turns++;
        }
        turns = 0;
        cout << "do you want to keep playin?\n";
        getline(cin, input);

        if(input == "no") {
            break;

        }
        artoo.newDay();
    }

    return 0;
}