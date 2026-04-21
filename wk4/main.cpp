//Kobi Nance coding 1 spring 2026
//writing to and reading from files

#include <iostream>
#include <fstream>          // file stream includes istream and ostream
#include <string>
#include <vector>


using namespace std;

//build a new function
//return type = void, name = writeFile(input, path)
void writeFile(string input, string path = "save.txt") {
    ofstream file(path);            //open the file at the specified path
    file << input;
    file.close();
}

void writeFile(vector<string>& vec, string path = "vector.txt") {
    ofstream file(path);
    for(i = 0; i < vec.size(); i++) {
        file << vec[i] << endl;
    }
    file.close();
}


void readFile(string path = "save.txt") {
    string line;
    ifstream file(path);
    if(file.is_open()) {
        while(getline(file, line)) {
            cout << line << endl;
        }
    }
    else {
        cout << "file not found\n";
    }

    file.close();
}
void readFile(vector<string>& vec, string path = "vector.txt") {
    vec.clear();            //make sure vec is empty
    ifstream file(path);
    if(file.is_open()) {
        while(getline(file, line)) {
            vec.push_back(line);
        }
    }
    file.close();
}

int main() {
    cout << "lets do some file operations!\n";


    //create a file (this will overwrite any file with the same name)
   // ofstream file("save.txt");          // output file stream
    //name it something
    //add some text
   // file << "here is some text.\n";
   // file << "here is another line of text\n";
    //close the file
   // file.close();
    //run the program
    //see if it exists

    writeFile("here is some text\nHeres another line of text\nHere's a third line\n");


    string line;
    ifstream readFile("save.txt");
    if(readFile.is_open()) {
        while(getline(readFile, line)) {
            cout << line << endl;
        }
    }

// create the vector of names
    vector<string> names = {"Harry," "Hermione," "Ron"};
//load the names from the file with readFile
readFile(names, "names.txt");
for(int i = 0; i < names.size(); i++) {
    cout << names[i] << endl;
}
//displaying the names in the vector


//add more names to the vector
//save the vector to a file
writeFile(names, "names.txt");


    return 0;
}