#include <iostream>
using namespace std;

void grades(int m){
    
    if(m>90 && m<=100){
        cout << "Grade A"<<endl;
    }else if(m>80 && m<=90){
        cout << "Grade B"<<endl;
    }else if(m>70 && m<=80){
        cout << "Grade C"<<endl;
    }else if(m>60 && m<=70){
        cout << "Grade D"<<endl;
    }else if(m>50 && m<=60){
        cout << "Grade E";
    } else {
        cout << "Grade F"<<endl;
    }
}

int main() {
    
    grades(55);


    return 0;
}