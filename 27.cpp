// insertion sort straight
#include<iostream>
using namespace std;
int main(){
    int a[20],n,i,j,key;
    cout<<"Enter the no. of array elements: ";
    cin>>n;
    cout<<"Enter elements:\n";
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<"Unsorted Array:\n";
    cout<<"[";
    for(i=0;i<n;i++){                         //to print - n is upper bound, lower bound 0
        cout<<" "<<a[i];
    }
    cout<<"]";
    // insertion sort logic
    for(i=1;i<n;i++){                         //to sort - lower bound is 1, considering first element already sorted
        key = a[i];                           //key is a temporary variable picking iterative values to insert
        j = i-1;                              //check thru each array element on left with the help of another variable j
        while(j>=0 && a[j]>key){              //logic to shift elements bigger than key to right side
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;                          //place key in sorted position
    }
    cout<<"\nSorted Array:\n";
    cout<<"[";
    for(i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<"]";
    return 0;
}
