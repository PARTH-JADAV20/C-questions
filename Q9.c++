#include <iostream>
#include <algorithm>
using namespace std;

int sorted(int arr[], int len){
    int max;
    
    for (int i=0; i<len-1; i++){
        for (int j=0; j<len-i-1; j++){
            if(arr[j]>arr[j+1]){
            max=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=max;
            }
        }
    }
    
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    // sort(arr, arr + len);
    
    // for (int i = 0; i < len; i++) {
    //     cout << arr[i] << " ";
    // }
    return 0;
}

int main() {
    int arr[]={4,2,8,5,1};
    
    int len=sizeof(arr)/sizeof(arr[0]);
    
    sorted(arr,len);
    return 0;
}