#include <bits/stdc++.h>
using namespace std;
main(){
    int n,i, j;
    cout<<"Enter Total Number of Elements: \n";
    cin>>n;
    int LA[n];
    cout<<"Enter the Array Elements \n";
    for(i=0;i<n;i++){
        cout<<"Enter Element["<<i+1<<"]:";
        cin>>LA[i];
    }cout<<"Which Araay Element Want to Delete \n";
    cin>>j;
    while (j < n){
        LA[j - 1] = LA[j];
        j = j + 1;
    }n = n - 1;
    cout<<"After deletion the elements are:\n";
    for (i = 0; i < n; i++){
        cout<<"Linear Array["<<i+1<<"]:"<<LA[i]<<endl;
    }
}