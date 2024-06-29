#include <stdio.h>
#include <math.h>
#include<limits.h>
class Solution {
public:
    int reverse(int x) {
        int m =0 ;
        while(x != 0){
            int digit = x % 10;
            m = m * 10 + digit ;

            if((m > INT_MAX/10)||(m< INT_MIN/10)){
                return 0;
            } 
            x =x /10 ;
        }
        return m;
        
    }
};