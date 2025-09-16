// Program to delete an element from an array
#include <iostream>
using namespace std;

int main() {
    int arr[10], n, pos;

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

    cout << "Enter the position (1 to " << n << ") to delete: ";
    cin >> pos;

    if (pos < 1 || pos > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    // Shift elements to the left
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
