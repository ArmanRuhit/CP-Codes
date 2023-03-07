//might come in interview
//A set of number is given where some numbers reoccurr same number of times 
//have to find which dont
//Example = [1, 1, 1, 2, 2, 2, 3]
//here 1 and 2 are here for 3 times and 3 is the unique one

#include <iostream>

int main(){
  int n, no, p, ans = 0, last_bit;
  int no_of_occurrence = 3;
  int cnt[64] = {0};
  
  std::cin >> n;
  for(int i = 0; i<n; i++){
    std::cin >> no;
    p = 0;
    while(no > 0){
      last_bit = no&1;
      cnt[p]+= last_bit;
      p++;
      no = no >> 1;
    }
  }
  p = 1;
  for(int i = 0; i<n; i++){
    cnt[i]%=no_of_occurrence;
    ans+=(cnt[i]*p);
    p = p << 1;
  }

  std::cout << ans << std::endl;

  return 0;
}