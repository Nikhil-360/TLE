#include<bits/stdc++.h>
using namespace std;

string f(int n) {
  if(n == 0) return "";
  string s = f(n/2);
  if (n%2 == 1) {
    s += '1';
  } else {
    s += '0';
  }
  return s;
}

void solveAnswer() {
  int number;
  cin >> number;
  cout << f(number) << endl;
}

// power  of a, b usign recursion
int main() {
  int t = 1;
  // cin >> t;
  while(t--) {
    solveAnswer();
  }
  return 0;
}