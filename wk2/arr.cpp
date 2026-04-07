// Kobi Nance 
//arrays, loops, and vectors
    //for and foreach loops
    //algorithims?

#include <iostream>
#include <string>
#include <cstdlib>          //for rand and srand
#include <ctime>            //for srand ((time0))

using namespace std;


int main () {
    srand(time(0)); 
    cout << "lets learn about arrays!\n";

   //arrays in C++ have a defined size.
   //arrays don't have a way to count how many things are in them.

    cout << "creating an array of high scores \n";

    //declaring a new integer array with a size of 5
    int highScores [5];

    highScores[0] = 4550;           //the first high scorre is at index 0
    highScores[1] = 2215;
    highScores[4] = 11;             //the last high score is at index 4

    cout << "the first score is " << highScores[0] << ".\n";

    cout << "here are all of the high scores\n";

    int index = 0;
    while (index < 5) {
        cout << highScores[index] << "\n";
        index++;
    }

   cout << "lets learn about for loops to show the scores again.\n";

    //for (initialization; test; action)
    //for (create the variable; how long do we loop for; how are we counting)
   for(int i = 0; i < 5; i++) {
    cout << i + 1 << ". " << highScores[i] << "\n";
   }

   //lets create a list of names and let the user choose the names
   // we will create the string array
   string names[10];
   // we'll create the input string variable
   string input;

    index = 0;
   // we'll start a while loop (or a do-while)
   while(index < 10) {
        //ask the player to type done or type a name
        cout << "what name would you like to add, or type 'done' to stop\n";
        cin >> input;

        if (input == "done") {
            cout << "we are done entering names\n";
            break;          //this gets us out of the loop
        }
        // check to see if the array is full
        // if so, break out of the loop
        names[index++] = input;
        //display the list of names
   }


   cout << "here are your names: \n";
   for(int i = 0; i < 10; i++) {
    if (names[i] == "") {
        continue;           //skip lines that are blank
    }
    cout << i + 1 << ". " << names[i] << "\n";
   }


   //pick a random name and save it
   //use a switch statement to pick one random response

   string name = names[rand() % index];

   cout << "lets talk about " << name << ".\n";

   switch(rand() % 4) {
        case 0:
            cout << "I love " << name << ".\n";
            break;
        case 1:
            cout << "I like " << name << ".\n";
            break;
        case 2:
            cout << "I don't like " << name << ".\n";
            break;
        case 3:
            cout << "I hate " << name << ".\n";
        break;
   }

   return 0;
}