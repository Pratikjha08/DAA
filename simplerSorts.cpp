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

int main(){
    int arr[5] = {5, 4, 3, 2, 1};
    bubbleSort(arr,5);
    return 0;
}