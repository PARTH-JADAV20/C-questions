#include <iostream>
using namespace std;

int oden(int arr[], int len){
    int ecount=0;
    int ocount=0;
    
    for (int i=0; i<len; i++){
        
        if (arr[i]%2==0){
            ecount=ecount+1;
        }else{
            ocount=ocount+1;
        }
    }
    
    cout << "Even :" << ecount << endl;
    cout << "Odd :" << ocount << endl;
    

    return 0;
}

int main() {
    int arr[]={1, 2, 3, 4, 5};
    
    int len=sizeof(arr)/sizeof(arr[0]);
  
    oden(arr,len);

    return 0;
}