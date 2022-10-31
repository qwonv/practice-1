#include
#include
#include
using namespace std;

int main() {
string input;
cout << "Enter the text to be encrypted: ";
getline(cin, input);

const int key = 114514;
string output = "";

for (int i = 0; i < input.size(); i++) {
output += (input[i] ^ key);
}

cout << "Encrypted text: " << output << endl;

system("pause");
return 0;
}
