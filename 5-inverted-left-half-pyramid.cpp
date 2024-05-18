#include <iostream>
using namespace std;

int main() {
  cout << "Inverted Left Half Pyramid" << endl;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int k = 5 - i; k > 0; k--) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
