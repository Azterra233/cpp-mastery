// binary search
#include<iostream>
using namespace std;
   /*
        Variable initializing
        a[20]: storage for elements, n: size, i: counter
        low, high, mid: pointers for the search range, key: the target value to find, found: status reference
    */ 
int main(){
    int a[20],n,i,low,high,mid,key,found=0;
    // Array setup and display
    cout<<"Enter the no. of array elements: ";
    cin>>n;
    cout<<"Enter elements in sorted order:\n";
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<"Array:\n";
    cout<<"[";
    for(i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<"]\n";
    // Implementing binary search logic
    cout<<"Enter the value to search: ";
    cin>>key;
    // Initialise boundaries
    low = 0;                            //Array start
    high = n-1;                         //Array end
    // the loop continues as long as the search range is valid
    while(low<=high){
        mid = (low+high)/2;                 //find the middle index
        if(a[mid]==key){
            cout<<"Element found at index: "<<mid<<"\n";      //searched element found at index mid
            found=1;
            break;                                            //exit loop 
        }else if(a[mid]<key){
            // Key is in the right half, so move the 'low' boundary
            low = mid + ;
        }else{
            // Key is in the left half, so move the 'right' boundary
            high = mid - 1;
        }
    }if(!found){
        cout<<"Element not found!\n";
    }
    return 0;
}