#include<stdio.h>
void tofh(intndisk,charsource,chartemp,chardesk);
int main()
{
charsource='A',temp='B',desk='c';
int disk;
printf("Enter the number of disk":);
scanf("%d",&disk);
printf("Sequence is :\n");
tofh(ndisk,source,temp,dest);
return 0;
}
void tofh(int ndisk,charsource,chartemp,chardisk)
{
if(ndisk==1)
{
printf("move disk%d from %c--->%c(n",ndisk,source,desk);
return;
}
tofh(ndisk_1,source,dest,temp)
printf("move disk %d from %c-->%c\n",ndisk,source,dest);
tofh(ndesk-1,temp,source dest);
}
