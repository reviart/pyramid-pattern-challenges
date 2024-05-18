#include <iostream>
using namespace std;

int main() {
  cout << "Left Half Pyramid" << endl;

  for (int i = 0; i < 5; i++) {
    for (int j = 4; j > i; j--) {
      cout << " ";
    }
    for (int k = 0; k < i + 1; k++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
