#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    vector<int> bt(n);
    cout << "Enter burst time of each process:\n";
    for (int i = 0; i < n; i++) {
        cin >> bt[i];
    }
    // Sort burst times in ascending order for SJF
    sort(bt.begin(), bt.end());
    vector<int> wt(n), tat(n);

    wt[0] = 0;
    // Calculate waiting time
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }
    // Calculate turnaround time
    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
    }
    cout << "\nBurst Time\tWaiting Time\tTurnAround Time\n";
    for (int i = 0; i < n; i++) {
        cout << bt[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;
    }
    // cout<<"avg"<<endl;
    // int avg=0;
    // for(int i=0; i<n; i++)
    // {
    //      avg = avg + tat[i];
    //      avg = avg + wt[i];
    //      cout<<avg/n<<endl;
    // }
   

    return 0;
}