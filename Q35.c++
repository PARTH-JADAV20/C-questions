#include <iostream>
using namespace std;

int main() {
    int rows=5;
    
    for(int i=0; i<rows; i++){
        for (int j=rows; j>i; j--){
            cout<<"*";
        }
        cout << endl;
    }
    
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int n=5;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}