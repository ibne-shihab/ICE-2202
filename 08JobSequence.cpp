#include<bits/stdc++.h>
using namespace std;
 
struct Job {
    int id, profit, deadline;
};
bool cmp(Job a, Job b) {
    return a.profit > b.profit;
}
int main() {
    int n ;
    cout<<"Enter the total number of jobs:";
    cin>>n;
    cout<<endl;
    vector<Job> jobs(n);
    for(int i = 0; i < n; i++) {
        jobs[i].id = i+1;
        cout<<"Enter the profit of the job ["<<i+1<<"]: " ;
        cin >> jobs[i].profit ;
        cout<<endl;
        cout<<"Enter the deadline of the job ["<<i+1<<"]: " ;
        cin>> jobs[i].deadline;
        cout<<endl;
    }
    sort(jobs.begin(), jobs.end(), cmp);
    vector<bool> slot(n, false);
    int profit = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = min(n, jobs[i].deadline)-1; j >= 0; j--) {
            if(!slot[j]) {
                slot[j] = true;
                profit += jobs[i].profit;
                cnt++;
                break;
            }
        }
        if(cnt == n) break;
    }
    cout <<"The Solution and the total profit is: "<< profit << endl;
    return 0;
}
