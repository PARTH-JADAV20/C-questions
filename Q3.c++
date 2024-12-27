#include <iostream> 
using namespace std;

void triangle(int a, int b, int c) {
    if (a == b && b == c) {
        cout << "The triangle is equilateral." <<endl;
    } else if (a == b || b == c || a == c) {
        cout << "The triangle is isosceles." <<endl; 
    } else { 
        cout << "The triangle is scalene." <<endl; 
    }
}

int main() {
    int a=4, b=5, c=4;

    triangle(a, b, c); 

    return 0;
}