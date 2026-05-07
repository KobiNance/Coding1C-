
//Kobi Nance spring 2026

#include <iostream>
#include <string>

using namespace std;

class critter {
   public:
   string name;
};

int main() {
string input;


cout << "what would you like to name your critter?\n";
cin >> input;
while(true) {
   cout << "what would you like to do?\n";
cin >> input;

   if(input == "feed") {
      cout << "nom nom nom\n";
   }
   else if(input == "train") {
      cout << "good job little guy!\n";
   }
   else if(input == "listen") {
      cout << "thank you for listening to me!\n";
   }
   else if(input == "battle") {
      cout << "an enemy is coming!\n";
   }
   else if(input == "") {
      cout << "i did not understand how to do that!\n";
   }
   else if(input == "done") {
      break;
   }
}
return 0;
}