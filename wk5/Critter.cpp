
//Kobi Nance spring 2026

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <fstream>

using namespace std;

// void writeFile(string input, string path = "save.txt") {
//     ofstream file(path);            
//     file << input;
//     file.close();
// }

// void writeFile(vector<string>& vec, string path = "vector.txt") {
//     ofstream file(path);
//     for(int i = 0; i < vec.size(); i++) {
//         file << vec[i] << endl;
//     }
//     file.close();
// }


// void readFile(string path = "save.txt") {
//     string line;
//     ifstream file(path);
//     if(file.is_open()) {
//         while(getline(file, line)) {
//             cout << line << endl;
//         }
//     }
//     else {
//         cout << "file not found\n";
//     }

//     file.close();
//}

void readFile(vector<string>& vec, string path = "save.txt") {
    vec.clear();            
    ifstream file(path);         //opens the file
    string line;
    if(file.is_open()) {
        while(getline(file, line)) {
            vec.push_back(line);
        
        }
    }
    file.close();
   }

vector <string> names;

//readFile(names, "names.txt");
// for(int i = 0; i < names.size(); i++) {
//     cout << names[i] << endl;
// }
// writeFile(names, "names.txt");

class critter {
private:
   string name;
   int damage;
   int hunger;
   int health;
public:

   critter(string givenName, int givenHealth, int givenDamage, int givenHunger) {
      cout << "A new critter has been formed.\n";
      name = givenName;
      //name = names[rand() % names.size()] + " Critter";
      health = givenHealth;
     // health = rand() % 4 + 4;
     // damage = rand() % 3 + 3;
     damage = givenDamage;
      //hunger = 0;
      hunger = givenHunger;
      hello();
   }
   
// critter() {
//    name = "timmy";
//    health = 5;
//    damage = 5;
//    hunger = 5;
//    hello();
// }

   void hello() {
      cout << "I'm " << name << " with " << health << " health ";
      cout << "and " << damage << " damage.\n";
      cout << "My hunger level is at " << hunger << ".\n";
   }
   bool attack(critter& oppenent) {
      oppenent.setHealth(oppenent.getHealth() - damage);
      cout << name << " has done " << damage << " damage to ";
      cout << oppenent.getName() << ".\n";

      if(oppenent.getHealth() <= 0) {
         return true;
      }
      else {
         return false;
      }
   }
   string getName() {
      return name;
   }
   int getHealth() {
      return health;
   }
   int getDamage() {
      return damage;
   }
   int getHunger() {
      return hunger;
   }

   void setName(string givenName) {
      name = givenName;
   }
   void setHealth(int givenHealth) {
      health = givenHealth;
   }
   void setDamage(int givenDamage) {
      damage = givenDamage;
   }
   void setHunger(int givenHunger) {
      hunger = givenHunger;
   }
};

// class bossCritter : public critter {
// private: 
//    int damageMultiplier = 2;
//    int healthMultiplier = 2;
// public:
//   bossCritter(int damageMultiplier, int healthMultiplier) {
//       critter::critter("boss", critter::getHealth() * healthMultiplier, critter::getDamage() * damageMultiplier, 7);
//        name = "boss";
//        damage = damage * damageMultiplier;
//        health = health * healthM ultiplier;
//        hunger = 0;
//    }

//    bool attack(critter& oppenent) {
//       int OppenentCurrentHealth = oppenent.getHealth();
//       oppenent.setHealth(OppenentCurrentHealth - getDamage());
//       cout << getName() << " has done " << getDamage() << " damage to ";
//       cout << oppenent.getName() << ".\n";

//       if(oppenent.getHealth() <= 0) {
//          return true;
//       }
//       else {
//          return false;
//       }
//    }
//    int getDamageMultiplier() {
//       return damageMultiplier;
//    }
//    int getHealthMultiplier() {
//       return healthMultiplier;
//    }
//    void setDamageMultiplier(int givenDamageMultiplier) {
//       damageMultiplier = givenDamageMultiplier;
//    }
//    void setHealthMultiplier(int givenHealthMultiplier) {
//       healthMultiplier = givenHealthMultiplier;
//    }
// };


int main() {
srand(time(0));
readFile(names);
string input;
critter player(names[rand() % names.size()] + " critter", rand() % 3 + 3, rand() % 4 + 4, 0);
critter Bob(names[rand() % names.size()] + " critter", rand() % 3 + 3, rand() % 4 + 4, 0);




do {
   cout << "what would you like to do?\n";
   getline(cin, input);

   if(input == "feed") {
      cout << player.getName() << " is at " << player.getHunger() << " hunger level.\n";
      player.setHealth(player.getHealth() - player.getDamage());
      player.setHunger(player.getHunger() - 1);
      cout << "nom nom nom\n";
   }
   else if(input == "name") {
      cout << "what would you like to name your critter?\n";
      getline(cin, input);
      player.getName() = input;
   }
   else if(input == "train") {
      if (player.getHunger() >= 10) {
         cout << player.getName() << "is too hungry to train!\n";
      }
      else if(player.getHunger() >= 5) {
         cout << player.getName() << " is getting hungry!\n";
         player.setHealth(player.getHealth() + 1);
         player.setDamage(player.getHealth() + 1);
         player.setHunger(player.getHealth() + 1);
      }
      else {
         cout << player.getName() << " is training hard!\n";
         player.setHealth(player.getHealth() + 1);
         player.setDamage(player.getHealth() + 1);
         player.setHunger(player.getHealth() + 1);
      }
      cout << "good job little guy!\n";
   }
   else if(input == "listen") {
      player.hello();
      cout << "thank you for listening to me!\n";
   }
   else if(input == "battle") {
      cout << "an enemy is coming!\n";
      Bob.getName() = "Destroyer";
      cout << player.getName() << " is fighting " << Bob.getName() << ".\n";
      while(player.getHealth() > 0 && Bob.getHealth() > 0) {
         if(player.attack(Bob)) {
            cout << "WOAH " << player.getName() << " successfully killed " << Bob.getName() << "!\n";
         }
         else {
            if(Bob.attack(player)) {
               cout << "OH no! " << player.getName() << " got defeated by " << Bob.getName() << "!\n";
            }
         }
      }
   }
   else if(input == "done") {
      break;
   }
    else {
      cout << "i did not understand how to do that!\n";
   }
} while(true);
return 0;
}