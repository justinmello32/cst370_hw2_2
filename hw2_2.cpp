#include <iostream>
#include <vector>

using namespace std;
int main() {

    int numberOfBoxes = 0;
    int maxApples = 0;
    vector<int> results;
    cin >> numberOfBoxes;

    int table[numberOfBoxes];

    for(int i = 0; i < numberOfBoxes; i++) {
        cin >> table[i];
    }

    for(int i =0; i < numberOfBoxes; i++) {

            //Check for one box
            if(numberOfBoxes == 1){
                results.push_back(i);
                maxApples = table[i];
                break;
            }
            if((i + 1) == numberOfBoxes) {
                results.push_back(i);
                maxApples = maxApples + table[i];
                break;
            }
            if (table[i] > table[i + 1]) {
                results.push_back(i);
                maxApples = maxApples + table[i];
                i++;
            } else {
                results.push_back(i + 1);
                maxApples = maxApples + table[i + 1];
                i = i + 2;
            }

    }

    cout << "Boxes:";
    for (int i = 0; i < results.size(); i++) {
        cout << results[i] << " ";
    }
    cout << endl;
    cout << "Max Apples:" << maxApples << endl;
    return 0;
}
