#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>
using namespace std;

struct Process {
    int pid;
    int arrivalTime;
    int burstTime;
    int remainingTime;
    int completionTime;
    int waitingTime;
    int turnaroundTime;
};

int main() {
    int n, timeQuantum;

    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> p(n);

    cout << "Enter Arrival Time and Burst Time:\n";
    for (int i = 0; i < n; i++) {
        p[i].pid = i + 1;

        cout << "P" << i + 1 << ": ";
        cin >> p[i].arrivalTime >> p[i].burstTime;

        p[i].remainingTime = p[i].burstTime;
    }

    cout << "Enter Time Quantum: ";
    cin >> timeQuantum;

    queue<int> readyQueue;
    vector<bool> inQueue(n, false);

    int currentTime = 0;
    int completed = 0;

    // Add processes arriving at time 0
    for (int i = 0; i < n; i++) {
        if (p[i].arrivalTime <= currentTime) {
            readyQueue.push(i);
            inQueue[i] = true;
        }
    }

    while (completed < n) {
        // CPU is idle
        if (readyQueue.empty()) {
            currentTime++;

            for (int i = 0; i < n; i++) {
                if (!inQueue[i] &&
                    p[i].remainingTime > 0 &&
                    p[i].arrivalTime <= currentTime) {

                    readyQueue.push(i);
                    inQueue[i] = true;
                }
            }

            continue;
        }

        int index = readyQueue.front();
        readyQueue.pop();

        int executionTime =
            min(timeQuantum, p[index].remainingTime);

        cout << "P" << p[index].pid
             << " executes from " << currentTime
             << " to " << currentTime + executionTime << endl;

        currentTime += executionTime;
        p[index].remainingTime -= executionTime;

        // Add newly arrived processes
        for (int i = 0; i < n; i++) {
            if (!inQueue[i] &&
                p[i].remainingTime > 0 &&
                p[i].arrivalTime <= currentTime) {

                readyQueue.push(i);
                inQueue[i] = true;
            }
        }

        // Process is incomplete, so put it back
        if (p[index].remainingTime > 0) {
            readyQueue.push(index);
        } else {
            p[index].completionTime = currentTime;

            p[index].turnaroundTime =
                p[index].completionTime - p[index].arrivalTime;

            p[index].waitingTime =
                p[index].turnaroundTime - p[index].burstTime;

            completed++;
        }
    }

    double totalWT = 0;
    double totalTAT = 0;

    cout << "\nPID\tAT\tBT\tCT\tTAT\tWT\n";

    for (const Process &process : p) {
        cout << "P" << process.pid << "\t"
             << process.arrivalTime << "\t"
             << process.burstTime << "\t"
             << process.completionTime << "\t"
             << process.turnaroundTime << "\t"
             << process.waitingTime << endl;

        totalWT += process.waitingTime;
        totalTAT += process.turnaroundTime;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << totalWT / n;
    cout << "\nAverage Turnaround Time: " << totalTAT / n;

    return 0;
}