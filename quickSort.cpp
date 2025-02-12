#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int partition(int *arr, int low, int high){
    int i = low, j = high, pivot = arr[low];
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if (i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void qs(int *arr, int low, int high){
    if (low < high){
        int pIndex= partition(arr,low,high);
        qs(arr, low, pIndex-1);
        qs(arr, pIndex+1, high);
    }
}

int main(){
    int arr[9] = {9, 7, 8, 6,5, 4, 3, 2, 1};
    qs(arr,0,8);
    for (int i = 0; i<=8; i++){
        cout << arr[i] << " ";
    }
    return 0;
}