#include <iostream>
using namespace std;

void oddeven(int num){
    int oddtotal=0;
    int eventotal=0;
    for(int i=0; num!=0; i++){
        int d = num%10;
        if (d%2==0){
            eventotal+=d;
        }else{
            oddtotal+=d;
        }
        num=num/10;
    }
    cout<<"OddTotal : " << oddtotal << endl;
    cout<<"EvenTotal : " << eventotal;
}

int main() {
    int num=132456;
    
    oddeven(num);

    return 0;
}