// #include <iostream>
// #include <vector>
// using namespace std;

// void removeelement(int arr[],int size){
//     int arr2[size-1];
    
//     for (int i=0; i<size-1;i++){
//         arr2[i] = arr[i];
//     }
    
//     for (int i=0; i<size-1;i++){
//         cout << arr2[i]<<" ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[]={1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
    
//     removeelement(arr,size);
    
//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// void removeelement(int arr[],int size){
//     if(size > 0){
//         size--;
//         for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//         }
//     }
    
//     cout << endl;
// }

// int main() {
//     int arr[]={1,2,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
    
//     removeelement(arr,size);
    
//     return 0;
// }




#include <iostream>
using namespace std;

void removeelement(int arr[], int &size) {
    if (size > 0) {
        int lastElement = arr[size - 1]; 
        arr[size - 1] = 0;  
        size--;  
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    removeelement(arr, size);  

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


