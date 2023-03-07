//https://www.spoj.com/problems/AGGRCOW/
#include <iostream>
using namespace std;

bool canPlaceCows(int stalls[], int n, int c, int min_sep){
  int last_cow = stalls[0];
  int cnt = 1;

  for(int i = 1; i < n; i++){
    if(stalls[i] - last_cow >= min_sep){
      last_cow = stalls[i];
      cnt++;
      if(cnt == c){
        return true;
      }
    }
  }
  return false;
}

int main(){
  int n, test_cases, cows, start, end, ans;
  cin >> test_cases;
  while(test_cases--){
    cin >> n >> cows;
    int stalls[n];

    for(int i = 0; i < n; i++){
      cin >> stalls[i];
    }

    start = 0;
    end = stalls[n-1] - stalls[0];
    ans = 0;

    while(start <= end){
      int mid = (start+end)/2;
      bool canPlaceCows_ = canPlaceCows(stalls, n, cows, mid);

      if(canPlaceCows_){
        ans = mid;
        start = mid + 1;
      } else{
        end = mid - 1;
      }
    }
    cout << ans << endl;
  }
  return 0;
}