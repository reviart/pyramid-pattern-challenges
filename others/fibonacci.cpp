#include <iostream>
#include <vector>
using namespace std;

int main() {
  cout << "Fibonacci" << endl;

  // Start from 0
  int max = 100, t1 = 0, t2 = 1, tmp;
  // int arrayResultElement = 0;
  vector<int> result;

  cout << t1 << "-" << t2 << "-";
  tmp = t1 + t2;

  while(tmp <= max) {
    // cout << arrayResultElement;
    // result[arrayResultElement] = tmp;
    // arrayResultElement += 1;
    // result.push_back(tmp);

    cout << tmp;
    // cout << tmp << "-";
    t1 = t2;
    t2 = tmp;
    tmp = t1 + t2;
  }
  cout << result.size();
  cout << endl;

  return 0;
}