#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void merge(int *arr, int low, int mid, int high) {
    int size = high - low + 1;  
    int temp[size];  
    int left = low, right = mid + 1, temp_index = 0;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[temp_index++] = arr[left++];
        } else {
            temp[temp_index++] = arr[right++];
        }
    }
    while (left <= mid) {
        temp[temp_index++] = arr[left++];
    }
    while (right <= high) {
        temp[temp_index++] = arr[right++];
    }
    for (int i = 0; i < size; i++) {
        arr[low + i] = temp[i];
    }
}

void ms(int *arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    ms(arr, low, mid);
    ms(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main() {
    int arr[9] = {9, 7, 8, 6, 5, 4, 3, 2, 1};
    ms(arr, 0, 8);
    
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}