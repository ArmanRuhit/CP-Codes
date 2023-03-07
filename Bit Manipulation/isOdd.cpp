#include <iostream>
using namespace std;

bool isOdd(int n){
  return (n&1);
}

int getIthBit(int n, int i){
  return (n>>i)&1;
}

int setBit(int n, int i){
  return n|(1<<i);
}

int clearBit(int n, int i){
  return n & ~(1<<i);
}

int updateBit(int n, int i, int v){
  return (n & ~(1<<i)) | (v<<i);
}

int main() {
  int n = 5;
  int i = 2;
  int v = 1;
  cout << isOdd(n) << endl;
  cout << getIthBit(n, i) << endl;
  cout << setBit(n, i) << endl;
  cout << clearBit(n, i) << endl;
  cout <<updateBit(n, 1, v) << endl;

  return 0;
}