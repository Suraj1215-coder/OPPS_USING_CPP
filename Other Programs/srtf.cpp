#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    vector<int> at(n), bt(n), rt(n), ct(n), tat(n), wt(n), res(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter AT and BT for P" << i + 1 << ": ";
        cin >> at[i] >> bt[i];

       
        rt[i] = bt[i];

       
        res[i] = -1;
    }

    int currentTime = 0;
    int completed = 0;

    while (completed < n) {

        int shortest = -1;

        for (int i = 0; i < n; i++) {

          
            if (at[i] <= currentTime && rt[i] > 0) {

            
                if (shortest == -1) {
                    shortest = i;
                }

            
                else if (rt[i] < rt[shortest]) {
                    shortest = i;
                }

            
                else if (rt[i] == rt[shortest] &&
                         at[i] < at[shortest]) {
                    shortest = i;
                }
            }
        }

      
        if (shortest == -1) {
            currentTime++;
            continue;
        }

        
        if (res[shortest] == -1) {
            res[shortest] = currentTime;
        }
 
        rt[shortest]--;

    
        currentTime++;

      
        if (rt[shortest] == 0) {

            ct[shortest] = currentTime;

     
            tat[shortest] = ct[shortest] - at[shortest];

          
            wt[shortest] = tat[shortest] - bt[shortest];

            res[shortest] = res[shortest] - at[shortest];

            
            completed++;
        }
    }

   
    cout << "\nP\tAT\tBT\tCT\tTAT\tWT\tRT\n";

    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << "\t"
             << res[i] << endl;
    }

    return 0;
}