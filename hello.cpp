#include <iostream>
using namespace std;
int glo=4 ,a;
void sum(int c ,int b)//* function(general form inputs)*//
{
    cout<< "the sum of two numbers are "<<( c + b) ;

}
void g(){
    cout<<"\n hello good morning";
}

int main(){
    //local variable> global variable ... global variable can be accessed by all
    // parameters used in the functions are the funtional parameters ----> sum(int, int) or sum(int a, int b)
    //parameters taken input are the actual parameters ---> sum(num1 , num2) 
    glo=66; 
    cout<< "hello world";
    cout<<"\nwelcome\t"<<glo;
    cout<<"\nenter a number :";
    cin>>a;

    if (a>5){
        sum(a, glo); // function(ur inputs) while calling
        g();

        return 0;
    }

}

