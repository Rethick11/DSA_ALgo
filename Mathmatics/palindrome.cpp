#include <iostream>
using namespace std;

bool palindrome(int x);

int main(){
    int x;
    cout << "Enter the number : ";
    cin >> x;
    string res =  (palindrome(x)==0)? "Not Palindrome":"Palindrome";
    cout << res;
}

bool palindrome(int x){
    int temp = x;
    int res=0;
    int remainder;
    while(temp>0){
        remainder = temp%10;
        res = (res*10)+remainder;
        temp = temp/10;
        }
    return (res==x);
}