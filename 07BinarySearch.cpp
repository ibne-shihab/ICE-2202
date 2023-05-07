#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arry[],int n,int find){
    int lower_bound=1;
    int upper_bound=n;
    int middle_point;
    while(lower_bound <= upper_bound){
        middle_point=(upper_bound + lower_bound)/2;
        if(arry[middle_point] == find){
            cout<<"The Array Pointer is:";
            return middle_point + 1;
        }else if (arry[middle_point]>find){
            upper_bound = middle_point - 1;
        }else if (arry[middle_point]<find){
            lower_bound = middle_point + 1;
        }else{
            cout<<"The Required Element is not in the list";
            return -1;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the Total Number of Array Elements:";
    cin>>n;
    int arry[n];
    cout<<"Enter Elements in ascending Order"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter Element ["<<i+1<<"] :";
        cin>>arry[i];
    }int find;
    cout<<"Enter the element you want to find:";
    cin>>find;
    cout<<BinarySearch(arry,n,find);
    return 0;
}