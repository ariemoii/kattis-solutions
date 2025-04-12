#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  long long n, m;
  while(cin >> n >> m) {
    if(m > n) {
      swap(m, n);
      
    }
    cout << n-m << endl;
  }
  return 0;
}
