#include<stdio.h>
int  main() {
int bt[4],n,wt[4],tat[4],i,j,twt,ttat,p[4],temp;
float awt,atat;
printf("Enter the total number of process: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("Enter number of process: ");
scanf("%d",&p[i]);
printf("Enter the number of burst time: ");
scanf("%d",&bt[i]);
}
for(i=0;i<n;i++)
{
   for(j=0;j<i;j++)
   {
       if(bt[i]<bt[j])
       {
            temp=bt[i];
          bt[i]=bt[j];
           bt[j]=temp;
            temp=p[j];
           p[i]=p[j];
           p[j]=temp;
          }
      }
 }
 wt[0]=0,tat[0]=bt[0];
twt=0,ttat=bt[0];
for(i=1;i<n;i++){
wt[i]=wt[i-1]+bt[i-1];
tat[i]=wt[i]+bt[i];
twt=twt+wt[i];
ttat=ttat+wt[i];
}
 awt=twt/n;
atat=ttat/n;
printf("\n Processor BurstTime WaitingTime TurnAroundTime ");
for(i=0;i<n;i++){
printf("\n %d\t   %d\t    %d\t   %d\t     ", p[i] , bt[i] , wt[i] , tat[i]);
}
printf("\nAverage wating time = %f",awt);
printf("\nAverage turnaround time = %f\n",atat);
return 0;
}          
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
