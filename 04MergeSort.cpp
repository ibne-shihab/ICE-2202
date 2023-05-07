#include<bits/stdc++.h>
using namespace std;
void merge(int arry[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];
    for (int i = 0; i < n1; i++) {
        a[i] = arry[l + i];
    }for (int i = 0; i < n2; i++) { 
        b[i] = arry[mid + 1 + i];
    }int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            arry[k] = a[i];
            i++; 
        }else {
            arry[k] = b[j];
            j++; 
        }
        k++;
    }while (i < n1) {
        arry[k] = a[i];
        i++; 
        k++;
    }while (j < n2) {
        arry[k] = b[j];
        j++; 
        k++;
    }
}void mergeSort(int arry[], int l, int r) {
    if (l < r) {
        int mid = (l + r) / 2;
        mergeSort(arry, l, mid);
        mergeSort(arry, mid + 1, r);
        merge(arry, l, mid, r);
    }
}int main() {
    int arry[] = { 66, 33, 40, 22, 55, 88, 60, 11, 80, 20, 50, 44, 77, 30 };
    mergeSort(arry, 0, 13); 
    for (int i = 0; i < 14; i++) {
        cout << arry[i] << " ";
    }cout << endl;
    return 0;
}
