#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool hasAdjacentSQ_QS(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Could not open file: " << filename << endl;
        return false;
    }

    char prevChar = '\0';
    char currentChar;
    while (file.get(currentChar)) {
        if ((prevChar == 'S' && currentChar == 'Q') || (prevChar == 'Q' && currentChar == 'S')) {
            file.close();
            return true;
        }
        prevChar = currentChar;
    }

    file.close();
    return false;
}

int main() {
    string filename = "t.txt";
    if (hasAdjacentSQ_QS(filename)) {
        cout << "The file contains the pair of adjacent letters 'SQ' or 'QS'." << endl;
    }
    else {
        cout << "The file does not contain the pair of adjacent letters 'SQ' or 'QS'." << endl;
    }
    return 0;
}