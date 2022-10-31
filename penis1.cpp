#include <iostream>
using namespace std;

int main() {
  int penis;
  cout << "penisの長さを入力してください(勃起時)" << endl;
  cin >> penis;
  if (penis <= 14 && penis >= 12) {
    cout << "平均です" << endl;
  }
  else if (penis < 12) {
    cout << "平均より下です" << endl;
  }
  else if (penis > 14) {
    cout << "平均より上です" << endl;
  }
}
