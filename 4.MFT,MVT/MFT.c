#include<stdio.h>
main()
{
int ms, bs, nob, ef,n,
mp[10],tif=0; int i,p=0;
printf("Enter the total memory available (in Bytes) -- ");
scanf("%d",&ms);
printf("Enter the block size (in Bytes) -- ");
scanf("%d", &bs);
nob=ms/bs;
ef=ms- nob*bs;
printf("\nEnter the number of processes -- ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter memory required for process %d (in Bytes)-- ",i+1);
scanf("%d",&mp[i]);
}
printf("\nNo. of Blocks available in memory--%d",nob);
printf("\n\nPROCESS\tMEMORYREQUIRED\tALLOCATED\tINTERNALFRAGMENTATION");
for(i=0;i<n && p<nob;i++)
{
printf("\n %d\t\t%d",i+1,mp[i]);
if(mp[i] > bs)
printf("\t\tNO\t\t---");
else
{
printf("\t\tYES\t%d",bs-mp[i]);
tif = tif + bs-mp[i];
p++;
}
}
if(i<n)
printf("\nMemory is Full, Remaining Processes cannot be accomodated");
printf("\n\nTotal Internal Fragmentation is %d",tif);
printf("\nTotal External Fragmentation is %d",ef);
}

Enter the total memory available (in Bytes) -- 2000
Enter the block size (in Bytes) -- 300

Enter the number of processes -- 3
Enter memory required for process 1 (in Bytes)-- 250
Enter memory required for process 2 (in Bytes)-- 150
Enter memory required for process 3 (in Bytes)-- 200

No. of Blocks available in memory--6

PROCESS MEMORYREQUIRED  ALLOCATED       INTERNALFRAGMENTATION
 1              250             YES     50
 2              150             YES     150
 3              200             YES     100

Total Internal Fragmentation is 300
Total External Fragmentation is 200
