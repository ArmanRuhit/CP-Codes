#include <iostream>
// First method
int countBits(int n){
  int ans = 0;
  while(n>0) {
    ans+=(n&1);
    n = n>>1;
  }
  return ans;
}
//Second method
int countBitsFast(int n){
  int ans = 0;
  while(n>0){
    n = n & (n-1);
    ans++;
  }
  return ans;
}

int main(){
  int n;
  std::cin >> n;
  std::cout << countBits(n) << std::endl;
  std::cout << countBits(n) << std::endl;
  std::cout << __builtin_popcount(n) << std::endl;
  return 0;
}