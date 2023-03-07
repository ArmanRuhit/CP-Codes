#include <bits/stdc++.h>
using namespace std;

int main(){
  unordered_multimap<int, int> mp;
  for(int i = 1; i<= 5; i++){
    mp.insert({i, i * 10});
  }
  mp.insert({4, 40});

  cout << "Elements present in the unordered multimap: " << endl;
  cout << "Key Elements" << endl;
  for(auto it = mp.begin(); it != mp.end(); i++){
    cout << it->first << "  " << it->second;
  }

  int n = 2;
  if(mp.find(2) != mp.end()){
    cout << n << " is present in unordered map" << endl;
  } 
  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key Element" << endl;
  for(auto it = mp.begin(); it != mp.end(); i++){
    cout << it->first << "  " << it->second << endl;
  }
  cout << "The size of the unordered multimap is: " <<mp.size() << endl;
  
  if(mp.empty() == false){
    cout << "The unordered multimap is: " << mp.size() << endl;
  } else {
    cout << "The unordered multimap is empty" << endl;
  }
  mp.clear();
  cout << "Size of the unordered multimap after clearing all the elements: " << mp.size(); 


}