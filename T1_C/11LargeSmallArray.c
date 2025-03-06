#include <stdio.h>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int largest = arr[0], smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
    return 0;
}
