#include <iostream>
using namespace std;

int first_occurrence(int a[], int n, int key){
  int start = 0;
  int end = n-1;

  int ans = -1;
  //Update in a direction that ans values gets lower and lower
  while(start<=end){
    int mid = (start+end)/2;

    if(a[mid] == key){
      ans = mid;
      end = mid - 1;
    } else if(a[mid] > key){
      end = mid -1;
    } else{
      start = mid + 1;
    }
  }
  return ans; 
}

int last_occurrence(int a[], int n, int key){
  int start = 0;
  int end = n-1;

  int ans = -1;
  //Update in a direction that ans values gets lower and lower
  while(start<=end){
    int mid = (start+end)/2;

    if(a[mid] == key){
      ans = mid;
      start = mid + 1;
    } else if(a[mid] > key){
      end = mid -1;
    } else{
      start = mid + 1;
    }
  }
  return ans; 
}

int main(){
  int arr[] = {1, 2, 5, 8, 8, 8, 8, 8, 10, 12, 15, 20};
  int n = sizeof(arr)/ sizeof(int);

  int key;
  cin >> key;
  // First and last occurrence of a key in a sorted array
  cout << first_occurrence(arr, n, key) << endl;
  cout << last_occurrence(arr, n, key) << endl;

  return 0;
}