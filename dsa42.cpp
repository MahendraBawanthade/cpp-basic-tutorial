#include<iostream>
using namespace std;

// Function to reverse array
void reverseArray(int arr[], int start, int end, int size) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Function calling
    reverseArray(arr, 0, n - 1, n);
    return 0;
}
