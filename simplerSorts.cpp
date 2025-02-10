#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int *arr,int n){
    for (int i = 0; i<n-1; i++){
        for (int j = 0; j<n-i-1;j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Printed using bubbleSort\n";
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void selectionSort(int *arr, int n){
    for (int i = 0; i<n; i++){
        int minIndex = i;
        for (int j = i+1; j<n; j++){
            if (arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        if (minIndex != i){
            swap(arr[minIndex],arr[i]);
        }
    }
    cout << "Printed using selectionSort\n";
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void insertionSort(int *arr, int n){
    for (int i =0; i<n;i++){
        int j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout << "Printed using insertionSort\n";
    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    int arr[5] = {5, 4, 3, 2, 1};
    bubbleSort(arr,5);
    selectionSort(arr,5);
    insertionSort(arr,5);
    return 0;
}