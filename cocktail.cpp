#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

vector<int> potionLengths;

void readInput(int n) {
  for(int i = 0; i < n; i++) {
    int Ti;
    cin >> Ti;
    potionLengths.push_back(Ti);
  }
}

int main() {
  int n, t;
  cin >> n >> t;
  readInput(n);

  sort(potionLengths.rbegin(), potionLengths.rend());
  int currentPot = 0;
  while(1) {
    if(currentPot == n) {
      break;
    }
    for(int i = 0; i < currentPot; i++) {
      potionLengths[i] -= t;
    }
    currentPot++;
  }

  bool flag = false;
  for(auto &pot : potionLengths) {
    if(pot <= 0) {
      flag = true;
      break;
    }
  }
  if(flag) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}
