#include <iostream>
#include <vector>

using namespace std;
int main() {

    int numberOfBoxes = 0;
    int maxApples = 0;
    vector<int> results;
    vector<int> finalResults;
    cin >> numberOfBoxes;

    int table[numberOfBoxes];

    //Get user input
    for(int i = 0; i < numberOfBoxes; i++) {
        cin >> table[i];
    }

    //Sort through records to set higher values
    for(int i = 0; i < numberOfBoxes; i++) {

        if(table[i] > table[i + 1]) {
            results.push_back(1);
        }
        else {
            results.push_back(0);
        }
    }

    //Sort items to make sure no boxes next to each other
    for(int i = 0; i < numberOfBoxes; i++) {
        if(results[i] == 1 && results[i + 1] == 1) {
            results[i + 1] = 0;
            results[i + 2] = 1;
        }
    }

    //Calculate max apples
    for(int i = 0; i < numberOfBoxes; i++) {
        if(results[i] == 1) {
            maxApples = maxApples + table[i];
            finalResults.push_back(i);
        }
    }





    cout << "Boxes:";
    for(int i = 0; i < finalResults.size(); i++) {
        cout << finalResults[i] << " ";
    }
    cout << endl;
    cout << "Max Apples:" << maxApples << endl;
    return 0;
}
