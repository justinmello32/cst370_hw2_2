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

//    if(table[0] > table[1]) {
//        results.push_back(0);
//        maxApples = maxApples + table[0];
//    }
//    else {
//        results.push_back(1);
//        maxApples = maxApples + table[1];
//    }

    for(int i =0; i < numberOfBoxes; i++) {

            //Check for one box
            if(numberOfBoxes == 1){
                results.push_back(i);
                maxApples = table[i];
                break;
            }

            if(table[i + 2] > table[i] && table[i + 2] > table[i + 1] && i > 1 && i < numberOfBoxes) {
                results.push_back(i);
                maxApples = maxApples + table[i + 2];
                i++;
            }

            if (table[i] > table[i + 1]) {
                results.push_back(i);
                maxApples = maxApples + table[i];
                i++;
            } else {
                results.push_back(i + 1);
                maxApples = maxApples + table[i + 1];
                i++;
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
