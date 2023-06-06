#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <random>
using namespace std;

vector<string> stoicQuotes;

string genStoicQuote(int quote) {
    return stoicQuotes.at(quote);
}

int main() {
    string fileName = "stoicQuotes.txt";
    ifstream file(fileName);
    if (!file) throw runtime_error("The file name does not exist!\n");
    while (file) {
        string s;
        getline(file, s);
        if (!file) break;
        stoicQuotes.push_back(s);
    }
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, stoicQuotes.size() - 1);
    int whichQuote = distrib(gen);
    cout << genStoicQuote(whichQuote) << endl;
    return 0;
}
