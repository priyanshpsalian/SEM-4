#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string.h>
using namespace std;

struct process
{
    int pid;
    int arrival_time;
    int burst_time;
    int priority;
    int start_time;
    int completion_time;
    int turnaround_time;
    int waiting_time;
    int response_time;
};
int main()
{
    int n;
    struct process p[100];
    float avg_turnaround_time;
    float avg_waiting_time;
    float avg_response_time;
    float cpu_utilisation;
    int total_turnaround_time = 0;
    int total_waiting_time = 0;
    int total_response_time = 0;
    cout << "enter n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        p[i].pid = i;
        cout << "Enter the burst time of process" << i << ":-";
        cin >> p[i].burst_time;
    }
    
    p[0].waiting_time = 0;
    for (int i = 1; i < n; i++)
    {
        p[i].waiting_time = p[i - 1].waiting_time + p[i - 1].burst_time;
        total_waiting_time = total_waiting_time + p[i].waiting_time;
    }
    for (int i = 0; i < n; i++)
    {
        p[i].turnaround_time = p[i ].burst_time + p[i ].waiting_time;
        total_turnaround_time = total_turnaround_time + p[i].turnaround_time;
    }
    cout << "#P\t"
         << "BT\t"
         << "TAT\t"
         << "WT\t"
         << "\n"
         << endl;

    for (int i = 0; i < n; i++)
    {
        cout << p[i].pid << "\t" << p[i].burst_time << "\t" << p[i].turnaround_time << "\t" << p[i].waiting_time << "\t"
             << "\n"
             << endl;
    }
    avg_turnaround_time = (float)total_turnaround_time / n;
    avg_waiting_time = (float)total_waiting_time / n;
    cout << "Average Turnaround Time = " << avg_turnaround_time << endl;
    cout << "Average Waiting Time = " << avg_waiting_time << endl;
}