// Deletion operation on Array using templates
#include <iostream>
using namespace std;

// Function Prototypes (Declarations)
template <typename T>
void printarray(T a[], int size);

template <typename T>
void deletebeg(T a[], int &size);

template <typename T>
void deleteend(T a[], int &size);

template <typename T>
void deletepos(T a[], int &size, int pos);

int main()
{
    int a[20], size;

    cout << "Enter the number of elements: ";
    cin >> size;

    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> a[i];
    }
    
    printarray(a, size);

    // 1. Delete from Beginning
    cout << "\n--- Deleting from Beginning ---";
    deletebeg(a, size);
    printarray(a, size);

    // 2. Delete from End
    cout << "\n--- Deleting from End ---";
    deleteend(a, size);
    printarray(a, size);

    // 3. Delete from Position
    int pos;
    cout << "\nEnter position index to delete (0-based): ";
    cin >> pos;
    
    deletepos(a, size, pos);
    printarray(a, size);

    return 0;
}

// Function Definitions

template <typename T>
void printarray(T a[], int size)
{
    cout << "\nArray:\n[ ";
    for (int i = 0; i < size; i++)  // Fixed i-- to i++
    {
        cout << a[i] << " ";
    }
    cout << "]\n";
}

template <typename T>
void deletebeg(T a[], int &size)
{
    if (size <= 0) return;
    
    // Shift all elements one spot to the left
    for (int i = 0; i < size - 1; i++) {
        a[i] = a[i + 1];
    }
    size--; 
}

template <typename T>
void deleteend(T a[], int &size)
{
    if (size <= 0) return;
    size--; // Decrement size to drop the last element
}

template <typename T>
void deletepos(T a[], int &size, int pos)
{
    if (pos < 0 || pos >= size) {
        cout << "Invalid Position!\n";
        return;
    }
    
    // Shift elements left starting from 'pos'
    for (int i = pos; i < size - 1; i++) {
        a[i] = a[i + 1];
    }
    size--;
}