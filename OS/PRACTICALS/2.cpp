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
    int is_completed[100];
    cout << "enter n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        p[i].pid = i;
        cout << "Enter the burst time of process" << i << ":-";
        cin >> p[i].burst_time;
        p[i].arrival_time=0;
        is_completed[i] = 0;
    }
    int j = 0, idx,small;
    int current_time = 0;
    while (j != n)
    {
        idx = 0;
        small = 100;
        for (int i = 0; i < n; i++)
        {
            if (p[i].burst_time <= small &&is_completed[i] == 0)
            {
                idx = i;
                small = p[i].burst_time;
            }
        }
        
        if (idx != -1)
        {
            p[idx].start_time = current_time;
            p[idx].completion_time = p[idx].start_time + p[idx].burst_time;
            p[idx].turnaround_time = p[idx].completion_time - p[idx].arrival_time;
            p[idx].waiting_time = p[idx].turnaround_time - p[idx].burst_time;

            total_turnaround_time += p[idx].turnaround_time;
            total_waiting_time += p[idx].waiting_time;

            is_completed[idx] = 1;
            j++;
            current_time = p[idx].completion_time;
        }
        else
        {
            current_time++;
        }
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