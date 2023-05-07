#include <bits/stdc++.h>
using namespace std;
main(){
    int item, k,n;
    cout<<"Enter total Number of Array Elements: ";
    cin>>n;
    int i = 0, j=n;
    int LA[n];
    cout<<"Enter the Array Elemnts: \n";
    for(i=1;i<=n;i++){
        cout<<"Enter Element["<<i<<"]:";
        cin>>LA[i];
    }n = n + 1;
    cout<<"At which Position You Want to Insert:";
    cin>>k;
    cout<<"The Integer Number You want to Insert:";
    cin>>item;
    while (j >= k){
        LA[j + 1] = LA[j];
        j = j - 1;
    }LA[k] = item;
    cout<<"The Array Elements after insertion: \n";
    for (i = 1; i <= n; i++){
        cout<<"Linear Array ["<<i<<"]:"<<LA[i]<<endl;
    }
}