//Kobi Nance Coding 1 Spring 2026
// Our first C++ program

//to compile open the developer command prompt for VS 2022
//navigate to this folder with cd for "changed directory"
//use the command 'cl /EHsc filename.cpp' (in this case, main.cpp)
//and then type "filename" to run the .exe (in this case, its 'main')

#include <iostream>             // in-out stream for sending text to the console.
#include <string>

using namespace std;            // so we don't have to type "std;;" all the time

//this is where our program starts running code.
int main() {
    //variables at the top is best practice.

    string playername;      //variable names use camelCase
    //ask the player what their name is
    cout << "what is your name player?";

    //get input from the player using C in
    cin >> playername;

    cout << "hello "<< playername << "." << endl;

//  cout << "hello world" <<endl;       //cout for "console out"
                                        //end L for "end line"
                                        
return 0;                               //the program finished successfully.
}