
//Kobi Nance spring 2026

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <fstream>

using namespace std;

vector <string> names = {"Bob", "Steve", "Tiffany", "Gavin"};

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
   
critter() {
   name = "timmy";
   health = 5;
   damage = 5;
   hunger = 5;
   hello();
}

   void hello() {
      cout << "I'm " << name << " with " << health << " health ";
      cout << "and " << damage << " damage.\n";
      cout << "My hunger level is at " << hunger << ".\n";
   }
   bool attack(critter& oppenent) {
      oppenent.health -= damage;
      cout << name << " has done " << damage << " damage to ";
      cout << oppenent.name << ".\n";

      if(oppenent.health <= 0) {
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

class bossCritter : public critter {
private: 
   int damageMultiplier = 2;
   int healthMultiplier = 2;
public:
   bossCritter(string damageMultiplier, int healthMultiplier) {
      name = "boss";
      damage = damage * damageMultiplier;
      health = health * healthMultiplier;
   }
    bool attack(critter& oppenent) {
      oppenent.health -= damage;
      cout << name << " has done " << damage << " damage to ";
      cout << oppenent.name << ".\n";

      if(oppenent.health <= 0) {
         return true;
      }
      else {
         return false;
      }
   }
   int getDamageMultiplier() {
      return damageMultiplier;
   }
   int getHealthMultiplier() {
      return healthMultiplier;
   }
   void setDamageMultiplier(int givenDamageMultiplier) {
      damageMultiplier = givenDamageMultiplier;
   }
   void setHealthMultiplier(int givenHealthMultiplier) {
      healthMultiplier = givenHealthMultiplier;
   }
};


int main() {
srand(time(0));
string input;
critter player;
bossCritter boss;
critter timmy;


do {
   cout << "what would you like to do?\n";
   getline(cin, input);

   if(input == "feed") {
      cout << player.name << " is at " << player.hunger << " hunger level.\n";
      player.hunger += -1;
      cout << "nom nom nom\n";
   }
   else if(input == "name") {
      cout << "what would you like to name your critter?\n";
      getline(cin, input);
      player.name = input;
   }
   else if(input == "train") {
      if (player.hunger >= 10) {
         cout << player.name << "is too hungry to train!\n";
      }
      else if(player.hunger >= 5) {
         cout << player.name << " is getting hungry!\n";
         player.health += 1;
         player.damage += 1;
         player.hunger += 1;
      }
      else {
         cout << player.name << " is training hard!\n";
         player.health += 1;
         player.damage += 1;
         player.hunger += 1;
      }
      cout << "good job little guy!\n";
   }
   else if(input == "listen") {
      player.hello();
      cout << "thank you for listening to me!\n";
   }
   else if(input == "battle") {
      cout << "an enemy is coming!\n";
      boss.name = "Destroyer";
      cout << player.name << " is fighting " << boss.name << ".\n";
      while(player.health > 0 && boss.health > 0) {
         if(player.attack(boss)) {
            cout << "WOAH " << player.name << " successfully killed " << boss.name << "!\n";
         }
         else {
            if(boss.attack(player)) {
               cout << "OH no! " << player.name << " got defeated by " << boss.name << "!\n";
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