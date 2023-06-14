#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <random>

using namespace std;

vector<string> stoicQuotes;

// Function to read quotes from file
void readQuotesFromFile(const string& fileName) {
    ifstream file(fileName);
    if (!file) throw runtime_error("The file name does not exist!\n");

    string line;
    while (getline(file, line)) {
        stoicQuotes.push_back(line);
    }
}

// Function to generate a random number within the range of quotes
int getRandomQuoteIndex() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, stoicQuotes.size() - 1);
    return distrib(gen);
}

int main() {
    string fileName = "stoicQuotes.txt";
    readQuotesFromFile(fileName);

    int quoteIndex = getRandomQuoteIndex();
    cout << stoicQuotes.at(quoteIndex) << endl;

    return 0;
}
