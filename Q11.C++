#include <iostream>
using namespace std;

int dup(int arr[], int arr2[], int len){
    int len2=0;
    int i,j;
    
    for (i = 0; i < len; i++) {
        int isDuplicate = 0; 
        for (j = 0; j < len2; j++) {
            if (arr[i] == arr2[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (isDuplicate==0) {
            arr2[len2] = arr[i];
            len2++;
        }
    }

    for (i = 0; i < len2; i++) {
        cout << arr2[i] ;
    }
    

    return 0;
}

int main() {
    int arr[7] = {1, 2, 2, 3, 4, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);

    int arr2[5] = {};
    
    dup(arr,arr2,len);
    

    return 0;
}