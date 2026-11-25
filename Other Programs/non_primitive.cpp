#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Process {
    int pid;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
};

int main() {
    int n;

    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> p(n);

    cout << "Enter Arrival Time and Burst Time:\n";

    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;

        cout << "P" << i + 1 << ": ";
        cin >> p[i].arrivalTime >> p[i].burstTime;
    }

    // Sort according to arrival time
    stable_sort(p.begin(), p.end(),
        [](const Process &a, const Process &b) {
            return a.arrivalTime < b.arrivalTime;
        });

    int currentTime = 0;
    double totalWT = 0;
    double totalTAT = 0;

    for (int i = 0; i < n; i++) {
        // CPU remains idle if the process has not arrived
        if (currentTime < p[i].arrivalTime) {
            currentTime = p[i].arrivalTime;
        }

        cout << "P" << p[i].pid
             << " executes from " << currentTime
             << " to " << currentTime + p[i].burstTime << endl;

        currentTime += p[i].burstTime;

        p[i].completionTime = currentTime;

        p[i].turnaroundTime =
            p[i].completionTime - p[i].arrivalTime;

        p[i].waitingTime =
            p[i].turnaroundTime - p[i].burstTime;

        totalWT += p[i].waitingTime;
        totalTAT += p[i].turnaroundTime;
    }

    cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";

    for (const Process &process : p) {
        cout << "P" << process.pid << "\t"
             << process.arrivalTime << "\t"
             << process.burstTime << "\t"
             << process.completionTime << "\t"
             << process.turnaroundTime << "\t"
             << process.waitingTime << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << totalWT / n;
    cout << "\nAverage Turnaround Time: " << totalTAT / n;

    return 0;
}