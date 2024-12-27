#include <iostream>
#include <string>
using namespace std;

void join(string str, string str2) {
    str=str+str2;
    cout << str;

}

int main() {
    string str = "hello ";
    string str2 = "world";
    join(str,str2);
    return 0;
}