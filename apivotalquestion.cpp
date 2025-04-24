#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

vector<long long> arr;

void readInput(int n) {
  for(int i = 0; i < n; i++) {
    long long s;
    cin >> s;
    arr[i] = s;
  }
}

int main() {
  int n;
  cin >> n;
  arr.resize(n);
  readInput(n);
  unordered_set<long long> maxs, mins;
  long long max = arr[0];
  maxs.insert(max);
  for(int i = 0; i < n; i++) {
    if(arr[i] >= max) {
      max = arr[i];
      maxs.insert(max);
    }
  }
  long long min = arr[n-1];
  mins.insert(min);
  for(int i = n-1; i >=0; i--) {
    if(arr[i] < min) {
      min = arr[i];
      mins.insert(min);
    }
  }
  unordered_set<long long> possible;
  for(auto &i : maxs) {
    if(mins.find(i) != mins.end()) {
      //element possible
      possible.insert(i);
    }
  }
  cout << possible.size() << ' ';
  int j = 0;
  for(auto &i : arr) {
    
    if(possible.find(i) != possible.end()) {
      cout << i << " ";
      j++;
    }
    if(j == 100) {
      break;
    }
    
  }
  cout << endl;
  return 0;
}
