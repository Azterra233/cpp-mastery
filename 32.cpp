// deletion operation on array straight - beginning
#include<iostream>
using namespace std;
int main(){
    int a[20],i,ub,lb,val;
    // make n print array
    cout<<"Enter the lower and upper bounds of array: ";
    cin>>lb>>ub;
    cout<<"Enter elements:\n";
    for(i=lb;i<ub;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>a[i];
    }
    cout<<"Array:\n";
    cout<<"[";
    for(i=lb;i<ub;i++){
        cout<<" "<<a[i];
    }
    cout<<"]\n";
    // delete value at beginning
    for(i=lb;i<=ub-1;i++){                // Shift existing elements one position to the left
        a[i] = a[i+1];
    }
    ub--;                                // Decrement upper bound once after shifting is done
    // array after deleting
    cout<<"\nNew Array:\n";
    cout<<"[";
    for(i=lb;i<ub;i++){
        cout<<" "<<a[i];
    }
    cout<<"]";
    return 0;
}