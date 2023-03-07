#include <iostream>

int decimalToBinary(int n){
  int ans = 0;
  int p = 1;
  int last_bit;
  while(n>0){
    last_bit = n&1;
    ans+=p*last_bit;
    p*=10;
    n = n>>1;
  }
  return ans;
}

int main(){
  int n;
  std::cin >> n;
  std::cout << decimalToBinary(n) << std::endl;

  return 0;
}