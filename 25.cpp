// linearsearch operation on array using templates
// izmethod linearsearch
#include <iostream>
using namespace std;

// Changed return type from 'void' to 'int'
template <typename T>
int linsear(T a[], int lb, int ub, T val) {
    for (int i = lb; i <= ub; i++) {
        if (a[i] == val) {
            return i; // Returns the index where 'val' was found
        }
    }
    return -1; // Returns -1 if not found
}
int main(){
    int a[10], n, key;
    cout<<"Enter the no. of array elements: ";
    cin>>n;
    // Read elements into the array
    cout<<"Enter elements: ";
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    cout<<"\nArray:\n";
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<"]";
    cout << "\nEnter the value to search: ";
    cin >> key;
    // Call function with array, lower bound (0), upper bound (n - 1), and key
    int result = linsear(a, 0, n - 1, key);
    if (result != -1) {
        cout << "Element found at index: " << result << "\n";
    } else {
        cout << "Element not found in the array.\n";
    }
    return 0;
}