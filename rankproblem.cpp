#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

vector<int> rankings;

void initRankings(int n) {
  for(int i = 1; i <= n; i++) {
    rankings[i] = i;
  }
}

void playGame(int n) {
  int team1, team2;
  scanf("T%d T%d", &team1, &team2);
  getchar();
  int t1Rank, t2Rank;
  for(int i = 0; i <= n; i++) {
    if(rankings[i] == team1) {
      t1Rank = i;
    }
    if(rankings[i] == team2) {
      t2Rank = i;
    }
  }
  if(t1Rank < t2Rank) {
    //do nothing
    return;
  }
  rankings.erase(rankings.begin()+t2Rank);
  rankings.insert(rankings.begin() + t1Rank, team2);
}

int main() {
  int n, m;
  cin >> n >> m;
  rankings.resize(n+1);
  getchar();
  initRankings(n);
  for(int i = 0; i < m; i++) {
    playGame(n);
  }
  for(auto &team : rankings) {
    if(team == 0) continue;
    cout << "T" << team << " ";
  }
  return 0;
}
