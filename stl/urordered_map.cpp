#include <bits/stdc++.h>

using namespace std;

int main(){
  unordered_map <int, int> mp;
  for(int i = 1; i<=5; i++){
    mp.insert({i, i*10});
  }

  cout << "Elements present in the map: " << endl;
  cout << "Key Element" << endl;
  for(auto it = mp.begin(); it != mp.end(); it++){
    cout << it->first << " " << it->second << endl;
  }

  int n = 10;
  if (mp.find(n) != mp.end())
    cout << n << " is present in map" << endl;
  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  cout << "The size of the map is: " << mp.size() << endl;
  if(mp.empty() == false)
    cout << "The map is not empty " << endl;
  else 
    cout << "The map is empty" << endl;
  
  mp.clear();
  cout << "Size of the set after clearing all the elements: " << mp.size();
}

// cbegin() – it refers to the first element of the unordered_map.
// cend() – it refers to the theoretical element after the last element of the unordered_map.
// rbegin() – it points to the last element of the unordered_map.
// rend() – it points to the theoretical element before the first element of the unordered_map.
// emplace() – to insert an element in the unordered_map.
// max_size() – the maximum elements a unordered_map can hold.