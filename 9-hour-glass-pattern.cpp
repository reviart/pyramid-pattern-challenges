#include <iostream>
using namespace std;

int main() {
  cout << "Hour Glass Pattern" << endl;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int k = 4 - i; k > 0; k--) {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = 0; i < 4; i++) {
    if (i == 0) continue;
    
    for (int j = 3; j > i; j--) {
      cout << " ";
    }
    for (int k = 0; k < i + 1; k++) {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}
