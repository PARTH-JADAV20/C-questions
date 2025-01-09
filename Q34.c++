#include <iostream>
using namespace std;

void firstlast(int arr[],int len){
    cout<<arr[0]<<endl;
    cout<<arr[len-1];
}

int main() {
    
    int arr[]={10,20,30,40,50};
    int len=sizeof(arr)/sizeof(arr[0]);
    
    firstlast(arr,len);
    
    return 0;
}



#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);  

    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}