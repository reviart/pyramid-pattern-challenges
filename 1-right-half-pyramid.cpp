#include <iostream>
using namespace std;

int main() {
  cout << "Right Half Pyramid" << endl;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
