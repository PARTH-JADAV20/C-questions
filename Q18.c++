#include <iostream>
using namespace std; 

void evenplace(int arr[],int len){
    for(int i=0; i<len ; i++){
        if(i%2==0){
            cout << arr[i]<<" ";
        }
    }
}

int main() {
    int arr[]={10, 20, 30, 40, 50};
    int len=sizeof(arr)/sizeof(arr[0]);
    
   evenplace(arr,len);

    return 0;
}