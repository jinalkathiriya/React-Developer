#include <iostream>
using namespace std;

void rotateArray(int positions) 
{
    int n = arr.size();
    positions %= n;  

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + positions);
    reverse(arr.begin() + positions, arr.end());
}

int main() 
{
    int n, positions;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of positions to rotate: ";
    cin >> positions;

    rotateArray(arr, positions);

    cout << "Rotated array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
