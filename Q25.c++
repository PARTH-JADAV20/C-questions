#include <iostream>
#include <string>
using namespace std;

void split(string str) {
    string str2 = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            str2 += str[i];
        } else {
            cout << str2 << endl;
            str2 = "";
        }
    }
    cout << str2 << endl;
}

int main() {
    string str = "Hello world, welcome to JavaScript!";
    split(str);
    return 0;
}
