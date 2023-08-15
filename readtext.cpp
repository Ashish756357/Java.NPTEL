#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the text file: ";
    cin >> filename;

    ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }

    vector<string> lines;
    string line;

    // Read each line from the file and store in the vector
    while (getline(inputFile, line)) {
        lines.push_back(line);
    }

    inputFile.close();

    // Display the content of the file with line numbers
    cout << "Content of " << filename << ":" << endl;
    for (int i = 0; i < lines.size(); i++) {
        cout << "[" << i + 1 << "] " << lines[i] << endl;
    }

    return 0;
}
