#include <iostream>
using namespace std;

void swap(int a, int b) {
    
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<< a ;cout<<"\t" ;
    cout<<b ;
}

int main(){
    int a=2 , b=4;
    cout<<"hello\n";
    swap(a , b);
}