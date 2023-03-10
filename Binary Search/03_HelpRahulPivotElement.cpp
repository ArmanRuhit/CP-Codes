// Given array is rotated [4, 5, 1, 2, 3]
//find element using efficient way-> Binary tree

#include <iostream>
using namespace std;

int find(int a[], int n, int key){
  int s = 0;
  int e = n-1;
  while(s<=e){
    int mid = (s+e)/2;
    if(a[mid] == key){
      return mid;
    }
    else if(a[s] <= a[mid]){
      //2 cases -> element lies on the left or the right of the mid
      if(key>=a[s] && key<=a[mid]){
        e = mid - 1;
      }
      else {
        s = mid + 1;
      }
    }
    else {
      if(key>= a[mid] && key <= a[e]){
        s = mid + 1;
      } else{
        e = mid - 1;
      }
    }

  }
  return -1;
}


int main(){
  int n, key;
  cin >> n;
  int a[n];
  for(int i = 0; i<n; i++){
    cin >> a[i];
  }
  cin >> key;
  cout << find(a, n, key) << endl;

  return 0;
}