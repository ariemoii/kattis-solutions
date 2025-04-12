#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  int k = 0;
  while(n != 1) {
    if(n%2== 0) {
      k++;
      n/=2;
      continue;
    }
    int factor = 3;
    while(n%factor != 0 && factor <= sqrt(n)) {
      factor+=2;
    }
    if(factor > sqrt(n)) {
      //number is prime
      k++;
      break;
    }
    n/=factor;
    k++;
  }
  cout << k << endl;
  return 0;
}
