#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int arr[] = {20, 30, 40, 50, 100, 1100};
  int n = sizeof(arr) / sizeof(int);
  // Search in a sorted way
  int key;
  cin >> key;

  bool present = binary_search(arr, arr + n, key);
  if (present)
  {
    cout << "Present" << endl;
  }
  else
  {
    cout << "Absent" << endl;
  }

  // Get the index of the element
  // lower_bound(s,e,key) and upper_bound(s, e, key)
  auto lb = lower_bound(arr, arr + n, key);
  cout << "lower bound of" << key << ": " << lb - arr << endl;

  auto ub = upper_bound(arr, arr + n, key);
  cout << "upper bound of of" << key << ": "<< ub - arr << endl;

  // to calculate frequency of a number upper_bound - lower_bound
  cout << "Occurrence freq of 40: " << ub - lb << endl;
  
  return 0;
}