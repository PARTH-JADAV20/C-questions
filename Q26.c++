#include <iostream>
#include <string>
using namespace std;

void findchar(string str, char chr){
    for (int i=0; i<str.length(); i++){
        if(str[i]==chr){
            cout<<"true";
            break;
        }
    }

}

int main() {
    
    string str="codinggita";
    char chr='a';
    
    
    findchar(str,chr);

    return 0;
}