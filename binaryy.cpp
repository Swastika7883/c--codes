#include <iostream>
#include <math.h>
using namespace std;
/*
int main() {
    int m = 0, n , i=0 ;
    cout<<"enter a number :";
    cin>> n;
    
    
    while(n){
        
        int bit = n & 1;
        m = (bit * pow(10 ,i)) + m ;
        n= n>> 1;

         i++;
    }
   
   cout << m;
   return 0;
}
*/


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int binaryNum = 0;
    int place = 1;
    
    while (n > 0) {
        int bit = n & 1;
        binaryNum += bit * place;
        n = n >> 1;
        place *= 10;
    }
   
    cout << binaryNum;
    return 0;
}

