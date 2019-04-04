#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int countOccurrences (string target, string main);

int main() {
    int numOccurrences = countOccurrences("aBC", "ABCdeaBcfgAbcd");
    cout << "Appears: " << numOccurrences << " times." << endl;
    return 0;
}

int countOccurrences (string target, string main) {
    for (int i = 0; i < main.length(); i++) {
        main[i] = tolower(main[i]);
        target[i] = tolower(target[i]);
    }
    
    int count = 0, location = 0, targetLength = target.length();
    while ((location = main.find(target, location)) != string::npos) {
        count++;
        location = location + targetLength;
    }
    return count;
}