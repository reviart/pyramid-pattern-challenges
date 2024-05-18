#include <iostream>
using namespace std;

int main() {
  cout << "Hollow Full Pyramid" << endl;

  for (int i = 0; i < 5; i++) {
    for (int j = 4; j > i; j--) {
      cout << " ";
    }
    for (int k = 0; k < i + 1; k++) {
      if ((i >= 3 && i <= 4 && k == 2) || (i >= 3 && i <= 4 && k >= 2 && k <= 4)) {
        cout << " ";
      } else {
        cout << "* ";
      }
    }
    cout << endl;
  }

  return 0;
}
