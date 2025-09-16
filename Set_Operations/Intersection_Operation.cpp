#include <iostream>
#include <vector>
using namespace std;

// Function to compute intersection of two sorted arrays
vector<int> intersection(const vector<int>& a, const vector<int>& b);

int main() {
    vector<int> a;
    vector<int> b;
    int val;

    int n1, n2;
    cout << "Enter the size of Set A: ";
    cin >> n1;
    cout << "Enter the elements of Set A (sorted): ";
    for (int i = 0; i < n1; i++) {
        cin >> val;
        a.push_back(val);
    }

    cout << "Enter the size of Set B: ";
    cin >> n2;
    cout << "Enter the elements of Set B (sorted): ";
    for (int i = 0; i < n2; i++) {
        cin >> val;
        b.push_back(val);
    }

    vector<int> c = intersection(a, b);
    cout << "The Intersection of the Arrays is: ";
    for (int x : c) {
        cout << x << " ";
    }
    cout << endl;
}

vector<int> intersection(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] == b[j]) {
            result.push_back(a[i]);
            i++;
            j++;
        } else if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}
