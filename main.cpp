#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <random>
using namespace std;

// Holds quotes for ease of access
vector<string> stoicQuotes;

// Call this to generate the random quote
string genStoicQuote(int quote) {
    return stoicQuotes.at(quote);
}

int main() {
    // Change this if you want a custom file.
    string fileName = "stoicQuotes.txt";
    ifstream file(fileName);
    // Error Check -- Make sure you have the quotes.
    if (!file) throw runtime_error("The file name does not exist!\n");
    while (file) {
        string s; // Reads a line at a time from the file into this variable
        getline(file, s);
        if (!file) break; // If we reach end of file, break from the loop
        stoicQuotes.push_back(s);
    }
    random_device rd; // Will be used to obtain a seed for the random number engine
    mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    uniform_int_distribution<> distrib(0, stoicQuotes.size() - 1);
    int whichQuote = distrib(gen);
    cout << genStoicQuote(whichQuote) << endl;
    return 0;
}
