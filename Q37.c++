#include <iostream>
using namespace std;

void flpos(int arr[],int len,int find){
    for(int i=0; i<len; i++){
        if(arr[i]==find){
            cout<<i;
            break;
        }
    }
    
    for(int i=len-1; i>0; i--){
        if(arr[i]==find){
            cout<<i;
            break;
        }
    }
}

int main() {
    
    int arr[]={5, 7, 7, 8, 8, 10};
    int find=8;
    int len=sizeof(arr)/sizeof(arr[0]);
    
    flpos(arr,len,find);
    
    return 0;
}