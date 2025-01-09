#include <iostream>
#include <string>
using namespace std;

void capti(string str){
    for (int i=0; i<str.length(); i++){
        if (str[i] >= 'a' && str[i] <= 'z') { 
            str[i] = str[i] - 32; 
        }
    }
    cout <<str;
}

int main() {
    
    string str="hello";
    
    
    capti(str);

    return 0;
}



#include <iostream>
#include <cctype>
using namespace std;

void UpperCase(string str) {
    for (int i = 0; i < str.length(); i++) {

        str[i] = toupper(str[i]);
    }
    cout << str;
}

int main() {
    string input = "hello";
    UpperCase(input);
    return 0;
}