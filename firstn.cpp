#include<iostream>
using namespace std;
int a, b ,i;
//print first n numbers 
void no(int x ){
    int i=1;
    while(i<=x){
        cout<< i;
        i=i+1;

    }

}

int main(){
cout << "enter a number :";
cin>> a;
for (i=1 ; i<=a ; i++){
    cout<<i;

}


cout<<"\n enter another number:";
cin>> b;
no(b);

}
