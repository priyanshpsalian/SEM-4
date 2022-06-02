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
    int remaining_time;
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
        p[i].remaining_time = p[i].burst_time;
        p[i].arrival_time = 0;
        is_completed[i] = 0;
    }
    cout << "enter time quantum";
    int qun;
    cin >> qun;
    int j = 0, idx, small;
    int current_time = 0;

    while (j != n - 1)
    {
        for (int i = 0; i < n; i++)
        {
            current_time = current_time + qun;
            if (p[i].remaining_time != 0 && is_completed[i] == 0  )
            {
                p[i].remaining_time = p[i].remaining_time - qun;
            }
            // (p[i].remaining_time != 0 && is_completed[i] == 0 && (p[i].remaining_time - qun) < 0)
            // {
            // }
            if (p[i].remaining_time <= 0 && is_completed[i] == 0)
            {
                if (p[i].remaining_time == 0)
                {
                    p[i].completion_time = current_time;
                    p[i].turnaround_time = p[i].completion_time;
                    p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;
                    is_completed[i] = 1;
                    j++;
                }
                else
                {
                    p[i].remaining_time = p[i].remaining_time - qun;
                    p[i].completion_time = current_time - (qun - p[i].remaining_time);

                    p[i].turnaround_time = p[i].completion_time;
                    p[i].waiting_time = p[i].turnaround_time - p[i].burst_time;
                    is_completed[i] = 1;
                    j++;
                }
            }
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