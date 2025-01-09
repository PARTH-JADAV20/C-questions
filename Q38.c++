#include <iostream>
#include <string>
using namespace std;

void ctof(int c){
    float f = (c * 9.0 / 5.0) + 32.0;
    cout << f;
}

int main() {
    
    float c=32.0;
    
    ctof(c);

    return 0;
}