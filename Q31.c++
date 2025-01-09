#include <iostream>
#include <string>
using namespace std;

void multistring(string str,int num){
    string str2="";
    for(int i=0; i<num; i++){
        str2=str2+str;
    }
    cout<<str2;
}

int main() {
    string str = "hello";
    int num = 3;
    
    multistring(str,num);

    return 0;
}