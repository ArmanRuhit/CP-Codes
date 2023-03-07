// You are given two 32 bit numbers, N and M and two bit positions, i and j. Write a method to set all bits between i and j in N equal to M 
// Example N = 10000000000
// M = 10101, i = 2 , j = 6
// Output N = 100001010100
#include <iostream>

int ClearRangeItoJ(int n, int i, int j) {
  int ones = -1;
  int a = ones << (j+1);
  int b = (1 << i) - 1;
  int mask = a|b;
  
  return n & mask;
}

int replaceBits(int n, int m, int i, int j) {
  int n_ = ClearRangeItoJ(n, i, j);
  return n_|(m<<i);
}

int main() {
  int n, m, i, j;
  std::cin >> n >> m >> i >> j;
  std::cout << replaceBits(n,m,i,j) << std::endl;

  return 0;
}