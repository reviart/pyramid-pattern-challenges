#include <iostream>
using namespace std;

int main() {
  cout << "Hollow Square Pattern" << endl;

  for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= 5; j++) {
      if (i == 1 || i == 6) {
        cout << "*";
      } else {
        if (j == 1 || j == 5) {
          cout << "*";
        } else {
          cout << " ";
        }
      }
    }
    cout << endl;
  }

  return 0;
}
