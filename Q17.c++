#include <iostream>
using namespace std; 

void countoden(int arr[],int len){
    int pcount=0;
    int ncount=0;
    for(int i=0; i<len ; i++){
        if(arr[i]>0){
            pcount++;
        }else if(arr[i]<0){
            ncount++;
        }
    }
    cout << "NO. of Positive : "<< pcount<<endl;
    cout << "NO. of Negative : "<< ncount;
}

int main() {
    int arr[]={1,-2,3,-4,5,-6};
    int len=sizeof(arr)/sizeof(arr[0]);
    
   countoden(arr,len);

    return 0;
}