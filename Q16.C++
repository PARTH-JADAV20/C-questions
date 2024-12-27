// #include <iostream>
// using namespace std;

// int ispositive(int arr[], int &size) {
//     for(int i=0; i<size; i++){
//         if(arr[i]<=0){
//             return false;
//         }
//     }
//     return true;
    
// }

// int main() {
//     int arr[] = {3, 5, 9, 1, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     ispositive(arr, size);  

//     if(ispositive(arr, size)){
//         cout << "true" << endl;
//     }else{
//         cout << "false" << endl
//         ;
//     }
    
//     return 0;
// }





// #include <iostream>
// using namespace std;

// int ispositive(int arr[], int &size) {
//     bool positive = true;
    
//     for(int i=0; i<size; i++){
//         if(arr[i]<=0){
//             positive = false;
//             break;
//         }
//     }
//     return positive;
    
// }

// int main() {
//     int arr[] = {3, 5, 9, 1, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     ispositive(arr, size);  

//     if(ispositive(arr, size)){
//         cout << "true" << endl;
//     }else{
//         cout << "false" << endl
//         ;
//     }
    
//     return 0;
// }




// #include <iostream>
// using namespace std;

// bool isNonPositive(int num) {
//     return num <= 0; 
// }

// bool ispositive(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         if (isNonPositive(arr[i])) {
//             return false;
//         }
//     }
//     return true;
// }

// int main() {
//     int arr[] = {3, 5, 9, 1, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     if (ispositive(arr, size)) {
//         cout << "true" << endl;
//     } else {
//         cout << "false" << endl;
//     }

//     return 0;
// }





#include <iostream>
using namespace std;

bool isNonPositive(int num) {
    return num <= 0; 
}

bool ispositive(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (!(arr[i] > 0)) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {3, 5, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (ispositive(arr, size)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}