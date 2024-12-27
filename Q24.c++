#include <iostream>
#include <string>
using namespace std;

void rmspace(string str) {
    string str2="";
    for (int i=0; i<str.length(); i++){
        if (str[i]!=' '){
            str2=str2 + str[i];
        }
    }
    cout << str2;

}

int main() {
    string str = " hello ";
    rmspace(str);
    return 0;
}