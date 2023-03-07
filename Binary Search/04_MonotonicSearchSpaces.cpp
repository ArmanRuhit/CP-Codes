#include <iostream>
using namespace std;

float square_root(int n, int p){
  int s = 0;
  int e = n;
  
  float ans = -1;

  //Integer Part
  while(s<=e){
    int mid = (s+e)/2;
    if(mid * mid == n){
      return mid;
    } else if(mid * mid < n){
      ans = mid;
      s = mid + 1;
    } else{
      e = mid - 1;
    }
  }

  //Floating Part
  //Brute Force
  float inc = 0.1;
  for(int times = 1; times <= p; times++){
    while(ans*ans <= n){
      ans = ans + inc;
    }

    ans = ans - inc;
    inc = inc/10;
  }

  return ans;
}

int main(){
  //Square Root using Binary Search
  //Monotonic Search Space -> where the function is only increasing or only decreasing
  int n;
  int precision = 3;
  cin >> n;
  cout << square_root(n, precision) << endl;

  return 0;
}