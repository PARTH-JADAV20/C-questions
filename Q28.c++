#include <iostream>
#include <vector>
using namespace std;

void great(int a,int b){
    if(a>b){
        cout<<a;
    }else if(b>a){
        cout<<b;
    }else{
        cout<<"equal";
    }
}

int main() {
    int a=20;
    int b=10;
    great(a,b);
    
    return 0;
}