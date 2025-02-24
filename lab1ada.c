#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void main()
{
int i,j,k,n,temp;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
srand(time(NULL));
clock_t start=clock();
for(i=0;i<n;i++)
{
a[i]=rand()%25000;
}
for(i=0;i<n;i++)
{
j=i;
for(k=i+1;k<n;k++)
{
if(a[k]<a[j])
{
j=k;
}
}
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
clock_t end=clock();

double timetaken=((double)(end-start))/CLOCKS_PER_SEC;
printf("time taken is %F\t",timetaken);
}
