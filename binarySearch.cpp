#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool binarySearch(int *arr, int key, int s, int e) {
    if (s > e) {
        return false;  
    }
    int mid = s + (e - s) / 2;  
    if (arr[mid] == key) {
        return true;  
    } else if (arr[mid] > key) {
        return binarySearch(arr, key, s, mid - 1);  
    } else {
        return binarySearch(arr, key, mid + 1, e);  
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    if (binarySearch(arr, 6, 0, 4)) {
        cout << "The element is present in the array";
    } else {
        cout << "The element is not present in the array";
    }
    return 0;
}