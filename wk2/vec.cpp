//Kobi Nane coding 1 spring 2026
//vectors, iterators, and algorithms

//use the double ampersand to run two commands at once

//cl /Ehsc vec.cpp && vec

#include <iostream>
#include <string>
#include <vector>           //for vectors!
#include <algorithm>


using namespace std;

int main () {
    cout << "lets learn about vectors!\n";

    int chapter = 0;
    cout << "what program would you like to run?\n";
    cout << "press 1 for vectors.\n";
    cout << "press 2 for push_back() and pop_back().\n";
    cout << "press 3 for algorithms.\n";

    cin >> chapter;
    if(chapter == 1) {

    //collection initializer
    vector<string> names {"finn", "jake", "bubblegum", "marceline", "shelby"};


    cout << "there are " << names.size() << " in the vector\n";
    cout << "here are your names:\n";

    for(int i = 0; i < names.size(); i++) {
        cout << i + 1 << ". " << names[i] << "\n";
    }


cout << "the first name in the vector is " << *(names.begin()) << ".\n";

//creating our first iterator, its a pointer to an element in a vector.
vector<string>::iterator iter;

iter = names.begin () + 2;

//dereference the iter with an asterisk at the beginning.
// whats with that word dereference. a pointer that can be thought of as a nickname.
//a reference to something else. when we dereference it, we get the value.
//that is at that point.
cout << "iter is pointing at " << *iter << ".\n";



    //end of chapter one
}
if(chapter == 2) {
    cout << "lets use push_back() and pop_back().\n";

    vector<string> favMovies;

    while(favMovies.size() < 3) {
        cout << "please add a favorite movie: ";
        string input;
        cin >> input;
        getline(cin, input);

        favMovies.push_back(input);
    }

    for(vector<string>::iterator iter = favMovies.begin(); iter != favMovies.end(); iter++) {
        cout << *iter << endl;
    }
}

if(chapter == 3) {
    vector<string> friends;
    friends.push_back("Joey");
    friends.push_back("Monica");
    friends.push_back("phoebe");
    friends.push_back("Ross");
    friends.push_back("Chandler");
    friends.push_back("Rachel");

    cout << "here are your friends: \n";
    for(int i = 0; i < friends.size(); i++) {
        cout << friends[i] << ".\n";
    }

    cout << "please choose a friend to go visit:\n";
    vector<string>::iterator chosenFriend = friends.begin();

    string input;
    cin >> input;

   chosenFriend = find (friends.begin(), friends.end(), input);

   if(chosenFriend != friends.end()){
    //displays the name of chosen friend...if we found one...
    cout << "lets talk to "  << *chosenFriend << " today!\n";
   }

   else {
    cout << "i couldn't find " << input << "in your friends.\n";
   }

cout << "lets give " << *chosenFriend << " a new name!\n";
cin >> input;
*chosenFriend = input;

cout << "Their name is now " << *chosenFriend << ".\n";



}
else {
    cout << chapter << " isn't one of the options.\n";
}

}