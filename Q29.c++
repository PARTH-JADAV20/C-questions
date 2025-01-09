#include <iostream>
using namespace std;

void pairs(int arr[],int len){
    int number=13;
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(arr[i]+arr[j]==number){
                cout<<i<<","<<j;
            }
        }
    }
}

int main() {
    int arr[]={2,7,11,15};
    int len=sizeof(arr)/sizeof(arr[0]);
    
    pairs(arr,len);

    return 0;
}