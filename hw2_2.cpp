#include <iostream>
#include <vector>

using namespace std;

// void getIndex(vector<int> v, int K)
// {
//     auto it = find(v.begin(), v.end(), K);
 
//     // If element was found
//     if (it != v.end()) 
//     {
     
//        // calculating the index
//        // of K
//        int index = it - v.begin();
//        cout << index << endl;
//     }
//     else {
//        // If the element is not
//        // present in the vector
//        cout << "-1" << endl;
//     }
// }


int main() {

   int numberOfBoxes;
   int maxApples;
   vector<int> results;
   vector<int> finalResults;
   vector<int> maxTrueResults;
   vector<int> maxFalseResults;
   
   cin >> numberOfBoxes;
   int table[numberOfBoxes];
   
   //Get number of boxes and amount per user input
   for(int i = 0; i < numberOfBoxes; i++) {
       cin>>table[i];
   }
   
   // store max apples when include i-th box's apples
   int maxTrue = table[0];
   // store max apples when exclude i-th box's apples
   int maxFalse = 0;
   
   for (int i = 1; i < numberOfBoxes; i++)
   {
       int tempValue = max(maxTrue, maxFalse);
       int greaterValue = max(table[i],table[i+1]);
       // maxTrue becomes previous maxFalse + current apples
       maxTrue = maxFalse + table[i];
       
       // maxFalse becomes max of previous maxFalse and maxTrue
       maxFalse = tempValue;
       
   }
   
   cout << "Boxes:";
   if(maxTrue > maxFalse) {
       maxApples = maxTrue;
   }
   else {
       maxApples = maxFalse;
   }
   
   for(int i = 0; i < results.size(); i++) {
      cout << results[i] << " ";
   }
   
   
   cout <<"Max Apples:"<< maxApples << endl;
  
  return 0;

    
}
  
