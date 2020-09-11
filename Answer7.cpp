#include <iostream>  

using namespace std;


int main() {

    double poundsWeight, ouncesWeight;

    double kilogramsWeight, gramsWeight;

 do {
     inputFunction(poundsWeight, ouncesWeight);

     calculateWeight(poundsWeight, ouncesWeight, kilogramsWeight, gramsWeight);

     cout << "Enter pounds weight: ";
     cin >> poundsWeight;

 while (poundsWeight < 0) {
     
      cout << "Enter a valid number of pounds weight: ";
      cin >> poundsWeight;
      
      }

        cout << endl;

  return 0;