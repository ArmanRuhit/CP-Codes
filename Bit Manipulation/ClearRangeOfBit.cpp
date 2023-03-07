#include <iostream>

int ClearLastIBits(int n, int i){
  int mask = -1 << i;
  return n & mask;
}

int ClearRangeItoJ(int n, int i, int j) {
  int ones = -1;
  int a = ones << (j+1);
  int b = (1 << i) - 1;
  int mask = a|b;
  
  return n & mask;
}

int main() {
  int n, i, j;
  std::cin >> n >> i >> j;
  std::cout << ClearLastIBits(n, i) << std::endl; 
  std::cout << ClearRangeItoJ(n, i, j) << std::endl; 
  return 0;
}