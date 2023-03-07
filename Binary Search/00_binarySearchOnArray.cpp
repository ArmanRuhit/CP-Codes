#include <iostream>
using namespace std;

int binary_search(int a[], int n, int key){
  int start = 0;
  int end = n-1;
  
  while(start <= end){
    int mid = (start+end)/2;
    if(a[mid] == key){
      return mid;
    }
    else if(a[mid]> key){
      end = mid - 1;
    }
    else{
      start = mid + 1;
    }
  }

  return -1; //if element is not present
}

int main(){
  int number_of_inputs, key;
  cin >> number_of_inputs;
  int a[1000];

  for(int i=0; i<number_of_inputs; i++){
    cin >> a[i];
  }

  cout << "Enter the element you want to search: ";
  cin >> key;
  int location = binary_search(a, number_of_inputs, key);
  if(location != -1){
    cout << "The location of " << key << " is " << location << endl; 
  } else{
    cout << "Item not found" << endl;
  }
    
}