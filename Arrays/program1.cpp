// Program to insert an element into an array
#include <iostream>
using namespace std;

int main() {
    int arr[10], n, num, pos;

    cout << "Enter the size of the array (max 10): ";
    cin >> n;

    if (n > 10 || n < 1) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 10) {
        cout << "Array is already full. Cannot insert new element." << endl;
        return 0;
    }

    cout << "Enter the element to insert and its position (1 to " << n+1 << "): ";
    cin >> num >> pos;

    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert at (pos-1) for 0-based indexing
    arr[pos - 1] = num;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
