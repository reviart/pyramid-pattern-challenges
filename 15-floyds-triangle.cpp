#include <iostream>
using namespace std;

int main() {
  cout << "Floyd's Triangle" << endl;

  int latest_value = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i; j++) {
      latest_value += 1;
      cout << latest_value;
    }
    cout << endl;
  }

  return 0;
}
