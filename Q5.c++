#include <iostream>
using namespace std;

int vote(int age){
    if (age>17){
        cout<<"can vote";
    }else {
        cout<<"can't vote";
    }
    return 0;
}

int main() {
    int age=18;
    vote(age);
    return 0;
}