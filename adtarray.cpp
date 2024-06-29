#include<iostream>
#include<vector>
using namespace std;
int main(){
    // linear search
    int n ,i;
    cout<<"Enter the number of elements:";
    cin>>n ;
    vector <int> arr(n);
    for(i=0; i<n ; i++){
        cout<<"Enter element "<<(i+1)<<"\t =";
        cin>>arr[i];

    }
    int key;
    cout<<"ENTER THE NUMBER YOU WANT TO SEARCH:";
    cin>>key;

    for(i=0; i<=n ; i++){
        if (arr[i]==key){
            cout<<" THE TARGET IS AT "<<i<<" POSITION"<<endl;
            break;
        }
        
    }
    return -1;


}