#include <iostream>
#include <string>
using namespace std;

int login(string uname, int pass){
    if(uname=="admin" && pass==1234){
        cout << "Login susccesful" ;
    }else {
        cout << "Login failed";
    }
    return 0;
}

int main() {
    string uname = "admin";
    int pass = 1234;
    
    login(uname, pass);
    return 0;
}