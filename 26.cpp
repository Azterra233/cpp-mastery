// Sorting - #1. Insertion Sort
// insertsort algoway
#include <iostream>
using namespace std;

void insertsort(int a[], int n) {
    int i, j, key;
    
    // Start from the second element (index 1) since a single element is already "sorted"
    for (i = 1; i < n; i++) {
        key = a[i];    // The element we want to insert into the sorted subarray
        j = i - 1;     // Start comparing with the element right before 'i'

        // Shift elements of a[0..i-1] that are greater than key to one position ahead
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        
        // Place key in its correct sorted location
        a[j + 1] = key;
    }
    cout << "\n\nAfter insertion sort:";
}

void printarr(int a[], int n) {
    cout << "\nArray:\n[";
    for (int i = 0; i < n; i++) {
        cout << " " << a[i];
    }
    cout << " ]\n";
}

int main() {
    int a[20], n, i;
    
    cout << "Enter the no. of array elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> a[i];
    }

    printarr(a, n);
    insertsort(a, n);
    printarr(a, n);

    return 0;
}

/*
Algorithm:
1. for i = lb + 1 to ub or 1 to n
2. key = a[i]
3. j = i - 1
4. while j >= 0 or lb and a[j] > key
5. a[j+1] = a[j]
6. j = j - 1
7. end while
8. a[j+1] = key
9. end for
10. end 
*/