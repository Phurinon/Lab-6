#include<iostream>
using namespace std;

int main(){
    int N = 1,even = 0,odd = 0;
    while(N != 0){
        cout << "Enter an integer: ";
        cin >> N;
    if(N != 0){
        if(N%2 == 0){
        even++;

    }else{
        odd++;
    }    

    }
    }
    cout << "#Even numbers = " << even <<"\n";
    cout << "#Odd numbers = "<< odd;

    
    return 0;
}
