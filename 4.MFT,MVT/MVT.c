#include<stdio.h>
main()
{
int ms,mp[10],i,
temp,n=0; char ch = 'y';
printf("\nEnter the total memory available (in Bytes)-- ");
scanf("%d",&ms);
temp=ms;
for(i=0;ch=='y';i++,n++)
{
printf("\nEnter memory required for process %d (in Bytes) -- ",i+1);
scanf("%d",&mp[i]);
if(mp[i]<=temp)
{
printf("\nMemory is allocated for Process %d ",i+1);
temp = temp - mp[i];
}
else
{
printf("\nMemory is Full"); break;
}
printf("\nDo you want to continue(y/n) -- ");
scanf(" %c", &ch);
}
printf("\n\nTotal Memory Available -- %d", ms);
printf("\n\n\tPROCESS\t\t MEMORY ALLOCATED ");
for(i=0;i<n;i++)
printf("\n \t%d\t\t%d",i+1,mp[i]);
printf("\n\nTotal Memory Allocated is %d",ms-temp);
printf("\nTotal External Fragmentation is %d",temp);
}


Enter the total memory available (in Bytes)-- 2000

Enter memory required for process 1 (in Bytes) -- 300

Memory is allocated for Process 1
Do you want to continue(y/n) -- Y


Total Memory Available -- 2000

        PROCESS          MEMORY ALLOCATED
        1               300

Total Memory Allocated is 300
Total External Fragmentation is 1700
