// insertion operation on array straight
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
    // insert value at beginning
    cout<<"\nEnter value to insert: ";
    cin>>val;
    for(i=ub-1;i>=lb;i--){                // Shift existing elements one position to the right
        a[i+1] = a[i];
    }
    a[lb] = val;                         // Insert new value at the lower bound
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