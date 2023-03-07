#include <bits/stdc++.h>
using namespace std; 

void explainVector();

int main(){
  explainVector();
}

void explainVector(){
  vector<int> v;

  v.push_back(1);
  v.emplace_back(2);

  cout << v[0] << endl;
}