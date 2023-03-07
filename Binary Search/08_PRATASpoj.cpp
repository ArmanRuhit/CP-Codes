//https://www.spoj.com/problems/PRATA/

#include <iostream>
using namespace std;

bool isPossible(int ranks[], int no_cook, int no_prata, int mid){
  cout << mid << endl;
  int i,j, taken_time = 0, prata = 1, total_prata = 0;
  for(i = 1, j = 0; i<=no_prata && j<= no_cook; i++){
    if(taken_time+(prata*ranks[j]) > mid){
      taken_time = 0;
      if(total_prata+prata>=no_prata){
        break;
      } else{
        total_prata+=prata;
      }
      prata = 1;
      j++;
    } else{
      taken_time+= prata*ranks[j];
      prata++;
    }
    cout << taken_time << " " << j << " " << total_prata<< " "  << i << " " << endl;
  }
  if(total_prata<no_prata){
    return false;
  } else{
    return true;
  }
}

int main(){
  int test_cases, no_prata, no_cook, ans = INT_MAX;
  int start, end;
  cin >> test_cases;
  while (test_cases--){
    cin >> no_prata >> no_cook;
    int ranks[no_cook];
    for(int i = 0; i < no_cook; i++){
      cin >> ranks[i];
    }
    start = 0;
    end = 0;
    for(int i = 1; i<=no_prata; i++){
      end+= ranks[no_cook-1]*i;
    }
    while(start <= end){
      int mid = (start+end)/2;
      if(isPossible(ranks, no_cook, no_prata, mid)){
        ans = mid;
        end = mid - 1;
      } else{
        start = mid + 1;
      }
    }
    cout << ans << endl;
  }
  
  return 0;
}