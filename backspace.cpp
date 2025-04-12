#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  vector<char> v;
  string str;
  cin >> str;
  for(auto &c : str) {
    if(c == '<') {
      v.pop_back();
    } else {
      v.push_back(c);
    }
  }
  for(auto &c : v) {
    cout << c;
  }
  cout << endl;
  return 0;
}
