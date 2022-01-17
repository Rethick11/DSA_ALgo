#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int On(int x);
int O1(int x);

int main(){
    int number;
    cout << "Enter the number : ";
    cin >> number;
    cout << O1(number);
    
    return 0;
}

int On(int x){
    int count=0;
    while(1){
        if(x == 0){
            break;
        }
        x = floor(x/10);
        count++;
    }
    return count;
}

int O1(int x){
    return floor(log10(x)) + 1;
}