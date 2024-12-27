#include <iostream>
using namespace std;

void vovel(char chr){
    if(chr=='a' || chr=='e' || chr=='i' || chr=='o' || chr=='u' || chr=='A' || chr=='E' || chr=='I' || chr=='O' || chr=='U'){
        cout << "vovel";
    }else {
        cout << "consonant";
    }
}

int main() {
    
    vovel('f');


    return 0;
}
