#include <iostream> 
using namespace std;


void nepos(int number) {
    if (number > 0) { 
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl; 
    } else {
        cout << "The number is zero." << endl; 
    }
}

int main() {
    int number =4;

    nepos(number); 

    return 0; 
}