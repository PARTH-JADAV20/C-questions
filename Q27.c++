#include <iostream>
#include <string>
using namespace std;

void findchar(string str){
    string str2="";
    for (int i = str.length() - 1; i >= 0; i--) {
        if (str[i] == '.') {
            break; 
        }
        str2=str[i]+str2;
    }
    cout<<str2;
}

int main() {
    
    string str="document.pdf";

    findchar(str);

    return 0;
}