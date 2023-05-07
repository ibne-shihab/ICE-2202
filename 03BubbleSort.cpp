#include<bits/stdc++.h>
using namespace std;
main(){
    int n,temp;
    cout<<"Enter with how many data you want to work:";
    cin>>n;
    int Data[n];
    cout<<"Enter the data elements: \n";
    for(int i=0;i<n;i++){
        cout<<"Enter Element["<<i+1<<"]:";
        cin>>Data[i];
    }int counter=1;
    int k =n;
    while(counter<n-1){
        for(int i=0;i<n;i++){
            if(Data[i]>Data[i+1]){
                temp=Data[i];
                Data[i]=Data[i+1];
                Data[i+1]=temp;
            }
            k--;
        }
        counter++;
    }
    cout<<"The Output of the Array Using Bubble Sort is given below:\n";
    for (int i = 0; i < n; i++){
        cout << Data[i] << "\t";
    }
}