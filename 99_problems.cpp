#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

/**
 * define two variables large and small
 * add and substract in every iteration respectively, check
 * if it end in 99. if it does, print and we are done.
 */

int main() {
  int n;
  cin >> n;
  int small =  n, large = n;
  while(true) {
    large++;
    if(large%100 == 99) {
      cout << large << endl;
      break;
    }
    small--;
    if(small%100 == 99) {
      cout << small << endl;
      break;
    }
  }
  return 0;
}
