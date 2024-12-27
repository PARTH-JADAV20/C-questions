#include <iostream>
#include <vector>
using namespace std;

void addelement(vector<int>& nums, int newElement){
    nums.insert(nums.end(),newElement);
    
    for (int num:nums){
        cout << num <<"";
    }
    cout << endl;
}

int main() {
    vector<int> nums= {1,2,3,4};
    int newElement=6;
    
    addelement(nums, newElement);
    
    return 0;
}