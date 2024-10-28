#include<bits/stdc++.h>
using namespace std;

int pow_recursion(int a, int b) {
  if (b == 0) return 1;
  int ans = pow_recursion(a, b/2);
  ans *= ans;
  if (b%2 == 1) return ans*a;
  return ans;
}

// power  of a, b usign recursion
int main() {
  int a, b;
  cin >> a >> b;
  cout << pow_recursion(a, b) << endl;

  return 0;
}