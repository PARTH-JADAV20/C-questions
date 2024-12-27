#include <iostream>
#include <algorithm>
using namespace std; 

void diffmaxmin(int arr[],int len){
    int max=*max_element(arr,arr+len);
    int min=*min_element(arr,arr+len);
    cout<<max-min;
    
}

int main() {
    int arr[]={80, 30, 70, 50, 20};
    int len=sizeof(arr)/sizeof(arr[0]);
    
   diffmaxmin(arr,len);

    return 0;
}