#include <iostream> 
using namespace std;

void AgeGroup(int age) {

    if (age < 13) {
        cout << "Child" << endl;  
    }
    
    else if (age >= 13 && age <= 19) {
        cout << "Teenager" << endl; 
    }
    
    else if (age >= 20 && age <= 59) {
        cout << "Adult" << endl;  
    }
   
    else if (age >= 60) {
        cout << "Senior" << endl; 
    }
    else {
        cout << "Invalid age" << endl;
    }
}

int main() {
    int age=20; 

    AgeGroup(age); 

    return 0; 
}





#include <iostream> 
using namespace std;

void AgeGroup(int age) {
    int age2;
    
    if (age < 13) {
        age2=0;  
    }
    
    else if (age >= 13 && age <= 19) {
        age2=1; 
    }
    
    else if (age >= 20 && age <= 59) {
        age2=2;  
    }
   
    else if (age >= 60) {
        age2=3; 
    }
    else {
        age2=4;
    }
    
    switch (age2){
        case 0:
        cout << "Child" << endl;
        break;
        case 1:
        cout << "Teenager" << endl;
        break;
        case 2:
        cout << "Adult" << endl;
        break;
        case 3:
        cout << "Senior" << endl;
        break;
        case 4:
        cout << "Invalid age" << endl;
        break;
    }
}

int main() {
    int age=20; 

    AgeGroup(age); 

    return 0; 
}




#include <iostream> 
using namespace std;

void AgeGroup(int age) {

    (age < 13 ?
        cout << "Child"   
    
    : (age >= 13 && age <= 19 ?
        cout << "Teenager"  
  
    : (age >= 20 && age <= 59 ?
        cout << "Adult"   
   
    : (age >= 60 ?
        cout << "Senior" 
    : 
        cout << "Invalid age" 
    ))));
}

int main() {
    int age=20; 

    AgeGroup(age); 

    return 0; 
}
