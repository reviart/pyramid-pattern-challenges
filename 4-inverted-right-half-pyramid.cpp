#include <iostream>
using namespace std;

int main() {
  cout << "Inverted Right Half Pyramid" << endl;

  for (int i = 0; i < 5; i++) {
    for (int j = 5; j > i; j--) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
