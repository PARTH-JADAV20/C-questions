#include <iostream>
using namespace std;

void century(int year){
    if(year%100==0){
        cout << "Year is century year";
    }else{
        cout << "Year is not century year";
    }
}

int main() {
    
    int year=2100;
    
    century(year);
    
    return 0;
}


#include <iostream>
using namespace std;

void century(int year){
    (year%100==0)? cout<<"Year is century year" :
    cout << "Year is nor century year";
}

int main() {
    
    int year=2100;
    
    century(year);
    
    return 0;
}





#include <iostream>
using namespace std;

void century(int year){
    switch(year%100){
    case 0:
        cout<<"century";
        break;
    default :
        cout <<"not century";
    }
}

int main() {
    
    int year=2100;
    
    century(year);
    
    return 0;
}