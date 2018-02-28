#include<stdio.h> 
int main() 
{ 
      int i,n, total = 0, x, count = 0, time_quantum; 
      int WT = 0, TAT = 0,AT[10],BT[10], temp[10]; 
      float average_wait_time, average_turnaround_time;
      
      printf("Enter Total Number of Process:"); 
      scanf("%d", &n); 
      x=n; 
      for(i = 0; i < n; i++) 
      {
            printf("\nEnter Details of Process[%d]\n", i + 1);
            printf("Arrival Time:\t");
            scanf("%d", &AT[i]);
            printf("Burst Time:\t");
            scanf("%d", &BT[i]); 
            temp[i] = BT[i];
      } 
      
      
      printf("\nEnter Time Quantum:\t"); 
      scanf("%d", &time_quantum); 
      
      printf("\nProcess ID\t\tBurst Time\t Turn around Time\t Waiting Time\n");
      
      for(total = 0, i = 0; x != 0;) 
      { 
            if(temp[i] <= time_quantum && temp[i] > 0) 
            { 
                  total = total + temp[i]; 
                  temp[i] = 0; 
                  count = 1; 
            } 
            else if(temp[i] > 0) 
            { 
                  temp[i] = temp[i] - time_quantum; 
                  total = total + time_quantum; 
            } 
            if(temp[i] == 0 && count == 1) 
            { 
                  x--; 
                  printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", i+1,BT[i], total -AT[i], total -AT[i] -BT[i]);
                  WT = WT + total - AT[i] - BT[i]; 
                  TAT= TAT+ total - AT[i]; 
                  count = 0; 
            } 
            if(i==n-1) 
            {
                  i = 0; 
            }
            else if(AT[i + 1]<=total) 
            {
                  i++;
            }
            else 
            {
                  i = 0;
            }
      } 
      average_wait_time = WT * 1.0 / n;
      average_turnaround_time = TAT * 1.0 / n;
      printf("\n\nAverage Waiting Time:\t%f", average_wait_time); 
      printf("\nAvg Turnaround Time:\t%f\n", average_turnaround_time); 
      return 0; 
}
