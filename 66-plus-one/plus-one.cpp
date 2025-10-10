#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {  
        short i=0;
        bool carry=0;

        for(i=digits.size()-1;i>=0;--i){
            if(digits[i]<=8){
                digits[i]++;
                carry=0;
                break;
            }else{
                digits[i]=0;
                carry=1;
            }
        }
        if(carry) digits.insert(digits.begin(),1);
        return digits;
            
}
int main(){
    return 0;
}
};