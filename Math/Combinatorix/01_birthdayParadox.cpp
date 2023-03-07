//What is the minimum number of that should be present in a hall so that there's 50% chance of two people having the same birthday

#include <iostream>
using namespace std;

int main(){
  float x = 1.0;
  //x denotes prob of 2 ppl not having same birthday
  int people = 0;

  float numerator = 365;
  float denominator = 365;

  float probability;
  cin >> probability;

  if(probability == 1.0){
    cout << "People x: 366" << endl;
    return 0;
  }

  while(x > 1 - probability){
    x = x*(numerator)/denominator;
    numerator--;
    people++;

    cout << "People "<< people << " and x " << x << endl;
  }

}