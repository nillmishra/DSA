#include<iostream>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n){
        int prod = 1;
        int sum = 0;
        while(n!=0){
            int digit = n!=0;
            prod =prod * digit;
            sum = sum + digit;
            n = n/10;
        }
        int answer = prod - sum;
        return answer;
        }
    };
