// Insertion operation on Array using templates
#include <iostream>
using namespace std;

// Print Array
template<typename T>
void printarr(T a[], int size) {
    cout << "Array: ";
    cout<<"[";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout<<"]";
}

// Insert at Beginning
template<typename T>
void insertbeg(T a[], int &size, T value) {
    for (int i = size; i > 0; i--){
        a[i] = arr[i - 1];                //shift all elements one spot right
    }
    a[0] = value;
    size++;
}

// Insert at End
template<typename T>
void insertend(T a[], int &size, T value) {
    a[size] = value;
    size++;                                 //increment to increase array elements
}

// Insert at Position
template<typename T>
void insertpos(T a[], int &size, int pos, T value) {
    if (pos < 0 || pos > size) {
        cout << "Invalid Position!\n";
        return;
    }

    for (int i = size; i > pos; i--){
        a[i] = a[i - 1];
    }
    a[pos] = value;
    size++;
}

int main() {
    int a[20];
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++){
        cin >> a[i];
    }
    printarr(a, size);

    // Beginning
    int value;
    cout << "\nEnter value to insert at beginning: ";
    cin >> value;
    insertbeg(a, size, value);
    printarr(a, size);

    // End
    cout << "\nEnter value to insert at end: ";
    cin >> value;
    insertend(a, size, value);
    printarr(a, size);

    // Position
    int pos;
    cout << "\nEnter position: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> value;
    insertpos(a, size, pos, value);
    printarr(a, size);

    return 0;
}