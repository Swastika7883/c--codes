#include <iostream>
#include <vector>
using namespace std;
//binary search
int main() {
    int n, searchValue, i;
    
    // Read the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    // Declare a vector of size n
    vector<int> arr(n);
    
    // Read elements into the array
    cout << "Enter the elements of the array: ";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Read the value to be searched
    cout << "Enter the value to search for: ";
    cin >> searchValue;
    
    // Perform linear search
    bool found = false;
    for(i = 0; i < n; i++) {
        if(arr[i] == searchValue) {
            cout << "Value " << searchValue << " found at index " << i << "." << endl;
            found = true;
            break;
        }
    }
    
    if(!found) {
        cout << "Value " << searchValue << " not found in the array." << endl;
    }

    return 0;
}
