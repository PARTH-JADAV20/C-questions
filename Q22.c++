#include <iostream>
#include <cctype>
using namespace std;

void length(string str) {
    int lencount=0;
    for (int i=0; str[i]!='\0'; i++){
        lencount++;
    }
    cout << lencount;
}

int main() {
    string str = "Hello, World!";
    length(str);
    return 0;
}




