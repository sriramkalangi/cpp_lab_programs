#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int temp = n;
    int rev = 0;
    while(n>0){
        int d = n%10;
        rev = rev*10 + d;
        n/=10;
    } 
    if(rev == temp){
        cout << temp << " : is a palindrome number" << endl;
    }
    else{
        cout << temp << " : is not a palindrome number" << endl;
    }
    return 0;
}