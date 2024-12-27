#include <iostream>
using namespace std; 

void ascend(int arr[],int len){
    int count=0;
    for(int i=0; i<len-1; i++){
        if(arr[i+1]<arr[i]){
           count++;
        }
    }
    if(count==0){
        cout<<"true";
    }else{
        cout<<"false";
    }
}

int main() {
    int arr[]={1, 2, 3, 4, 5};
    int len=sizeof(arr)/sizeof(arr[0]);
    
   ascend(arr,len);

    return 0;
}