#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  string output;
  for(auto &c : s) {
    if(isupper(c)) {
      output.push_back(c);
    }
  }
  cout << output << endl;;
  return 0;
}
