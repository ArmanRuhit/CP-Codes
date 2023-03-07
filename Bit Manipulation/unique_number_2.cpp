//Example a = [1, 1, 2, 3, 4, 4]
//Output 2, 3
//It will only output 2 unique numbers

#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int num[n];
  int i;
  int xr = 0;
  for(i=0; i<n; i++){
    std::cin >> num[i];
    xr = xr^num[i];
  }
  int temp = xr;
  int pos = 0;
  while(temp > 0){
    pos++;
    temp = temp >> 1;
  }
  std::cout << pos << std::endl;
  int mask = 1 << pos;
  int a = 0, b;
  for(i = 0; i<n; i++){
    if(num[i]&mask>0){
      a = a^num[i];
    }
  }
  b = xr^a;
  std::cout << a << " " << b << std::endl;
  return 0;
}