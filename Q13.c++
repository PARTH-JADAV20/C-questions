#include <iostream>
using namespace std;


int cnt(int arr[], int len, int find){
    int i;
    int count=0;
    
    for (i = 0; i < len; i++) {
        if(arr[i]==find){
            count++;
        }
    }
    if (count>0){
        cout << "true";
    }else{
        cout << "false";
    }
    return 0;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int find = 3;
    cnt(arr,len,find);

    return 0;
}