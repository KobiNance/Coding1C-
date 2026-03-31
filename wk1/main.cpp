// kobi Nance coding 1 spring 2026
// using vs codium and its integrated terminal
// to learn about variables, and logic

//compile in the developer command prompt with
//cl EHsc main.cpp

#include <iostream>
using namespace std;

int main () {
    // \n or backslash n makes a new line
    cout << "\n\n\nall about variables and logic!\n\n\n";

    // 40 minutes!

    //declaring a variable means it exists!
    //defining a variable means giving it a value.
    int playerAge = -1;             //intergers are whole numbers
    string playerName = "Sally";    //strings are for words/letters
    float playerHeight = 1.8f;      //height in meters
    bool playAgain = true;          //booleans are true or false


    //an if than statement in unreal engine
    //if (test is true) do this thing. otherwise..skip it!
    if(playerAge == -1){
        cout << "how old are you?\n";
        cin >> playerAge;

        if(playerAge < 13) {
            cout << "im sorry, this game is too grown up for you.\n";
        }
        else {
            cout <<"wow! that's old!\n";
        }
    }
    //can you test to see if the player name is sally and if it is
    //ask the player what their name is, and assign their response
    //to playername
    if (playerName =="sally") {
        cout << "is your name sally?\n(yes/no)";
        string input;
        cin >> input;

        if (input == "yes") {
            cout << "well that's conveinent!\n";
        }
        else {cout << "what is your name?\n";
        cin >> playerName;
    }


    cout << "hello" << playerName << ".\n";


    }//end of if(true)

    //if their name and age matches the programmer of this program
    //unlock god mode

    bool godmode = false;

    if(playerAge  == 37 && playerName == "Kobi") {
        cout << "hello, God mode is enabled\n";

    }
    if(playAgain){
        cout << "lets play a game!\n";

        //next class we'll build a guess the number game.
    }

    return 0;

    //end of main ()
}