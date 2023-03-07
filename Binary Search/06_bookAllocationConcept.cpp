//You are given number of pages in n different books and m students. The books are arranged in a ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way the maximum number of pages to assigned to a student is minimum

//Input Format
//First line contains integer t as number of test cases. Next t lines contains two lines. For each test case, 1st line contains two integers n and m which represents the number of pages of n books in ascending order.

//Constraints
// 1 < t < 50
// 1 < n < 100
// 1 < m < 50
// 1 <= Ai <= 1000

//Output format
//Print the maximum number of pages that can be assigned to students
//Sample Input
//1
//4 2
//12 34 67 90

//Sample output
//113

#include <iostream>
using namespace std;

bool isPossible(int a[], int n, int m, int curr_min){
  int studentUsed = 1;
  int pages_reading = 0;

  for(int i = 0; i<n; i++){
    if(a[i] > curr_min){
      return false;
      //Not required
    }
    if(pages_reading + a[i] > curr_min){
      studentUsed++;
      pages_reading = a[i];
      if(studentUsed > m){
        return false;
      }
    } else{
      pages_reading+= a[i];
    }
  }
  return true;
}

int findPages(int a[], int n, int m){
  int sum = 0;
  int ans = INT_MAX;
  if(n<m){
    return -1;
  }

  //cout number of pages
  for(int i=0; i<n; i++){
    sum+=a[i];
  }
  int s = a[n-1];
  int e = sum;

  while(s <= e){
    int mid = (s+e)/2;
    
    if(isPossible(a, n, m, mid)){
      ans  = min(ans, mid);
      e = mid - 1;
    } else{
      //It is not possible to divide at x pages
      //increase the no of pages
      s = mid + 1;
    }
  }
  return ans;
}

int main(){
  int t;
  int n, m;
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> n >> m;
    int a[n];
    for(int j = 0; j < n; j++){
      cin >> a[j];
    }
    cout << findPages(a, n, m) << endl;
  }
}
