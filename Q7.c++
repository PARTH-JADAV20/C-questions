#include <iostream>
#include <string>
using namespace std;

int traffic(string light){
    if (light=="red"){
        cout<<"stop";
    }else if(light=="green"){
        cout<<"go";
    }else if(light=="yellow"){
        cout<<"slow down";
    }else {
        cout<<"invalid input";
    }
    return 0;
}

int main() {
    string light = "red";
    
    traffic(light);
    return 0;
}