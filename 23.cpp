// Insertion operation on Array using templates
#include <iostream>
using namespace std;

// Print Array
template <class T>
void printArray(T arr[], int size) {
    cout << "Array: ";
    cout<<"[";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout<<"]";
}

// Insert at Beginning
template <class T>
void insertBeginning(T arr[], int &size, T value) {
    for (int i = size; i > 0; i--){
        arr[i] = arr[i - 1];                //shift all elements one spot right
    }
    arr[0] = value;
    size++;
}

// Insert at End
template <class T>
void insertEnd(T arr[], int &size, T value) {
    arr[size] = value;
    size++;                                 //increment to increase array elements
}

// Insert at Position
template <class T>
void insertPosition(T arr[], int &size, int pos, T value) {
    if (pos < 0 || pos > size) {
        cout << "Invalid Position!\n";
        return;
    }

    for (int i = size; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    size++;
}

int main() {
    int arr[20];
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    printArray(arr, size);

    // Beginning
    int value;
    cout << "\nEnter value to insert at beginning: ";
    cin >> value;
    insertBeginning(arr, size, value);
    printArray(arr, size);

    // End
    cout << "\nEnter value to insert at end: ";
    cin >> value;
    insertEnd(arr, size, value);
    printArray(arr, size);

    // Position
    int pos;
    cout << "\nEnter position: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> value;
    insertPosition(arr, size, pos, value);
    printArray(arr, size);

    return 0;
}