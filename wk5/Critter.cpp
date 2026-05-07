
//Kobi Nance spring 2026



#include <iostream>
#include <string>



using namespace std;



class critter {
     private:
string name;
int startingHealth = 20;
int baseDamageToOtherCritter = 5;
int health;



 public:
 critter(string givenName)
{
 name = givenName;

 cout << "what name would you like to use, or type 'done' to stop\n";
        cin >> input;

         if (input == "done") {
            cout << "we are done entering a name\n";
            break;
         }



health = startingHealth;



return;
}



int RemainingHealth()
{
return health;
}



void DamageOnCritter(int Damage)
{
health = health - Damage;
}



};

