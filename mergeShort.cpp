#include<iostream>
using namespace std;

void merge(int arr[], int f, int l, int mid) {
    int s1 = mid - f + 1;
    int s2 = l - mid;

    int arr1[s1], arr2[s2];

    for (int i = 0; i < s1; i++) {
        arr1[i] = arr[f + i];
    }
    for (int i = 0; i < s2; i++) {
        arr2[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = f;
    while (i < s1 && j < s2) {
        if (arr1[i] <= arr2[j]) {
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }

    while (i < s1) {
        arr[k++] = arr1[i++];
    }
    while (j < s2) {
        arr[k++] = arr2[j++];
    }
}

void mergeSort(int arr[], int f, int l) {
    if (f < l) {
        int mid = f + (l - f) / 2;
        mergeSort(arr, f, mid);
        mergeSort(arr, mid + 1, l);
        merge(arr, f, l, mid);
    }
}

int main() {
    int a;
    cout<<"Enter Size";
    cin>>a;
    int arr[a];
    cout << "Enter Value ";
    for (int i = 0; i < a; i++) {
        cout<<i+1<<" = ";
        cin>>arr[i];
    }

    cout << "UnSorted array: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << (i < a - 1 ? ", " : "");
    }
    cout<<endl;
    mergeSort(arr, 0, a - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << (i < a - 1 ? ", " : "");
    }

    return 0;
}
