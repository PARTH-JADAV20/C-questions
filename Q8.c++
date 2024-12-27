#include <iostream>
using namespace std;

int avrage(int arr[], int len){
    int avg=0;
    
    for(int i=0;i<len;i++){
        avg=avg+arr[i];
    }
    
    cout<<avg/len;
    return 0;
}

int main() {
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    
    avrage(arr,len);
    return 0;
}