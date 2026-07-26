// insertion operation on array straight - position
#include<iostream>
using namespace std;
int main(){
    int a[20],i,ub,lb,val,pos;
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
    // insert value at position
    cout<<"\nEnter value to insert: ";
    cin>>val;
    cout<<"\nEnter position(index): ";
    cin>>pos;
       for(i=ub-1;i>=pos;i--){                // Shift existing elements one position to the right
        a[i+1] = a[i];
    }
    a[pos] = val;                         // Insert new value at the desired position      
    ub++;                                // Increment upper bound once after shifting is done
    // array after inserting
    cout<<"\nNew Array:\n";
    cout<<"[";
    for(i=lb;i<ub;i++){
        cout<<" "<<a[i];
    }
    cout<<"]";
    return 0;
}