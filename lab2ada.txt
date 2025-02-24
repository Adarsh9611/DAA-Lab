#include<stdio.h>
#include<time.h>
void merge(int a[],int low,int mid,int high)
{
int i=low,j=mid+1,k=low;
int c[10000000];
while(i<=mid&&j<=high)
{
if(a[i]<a[j])
{
a[k]=a[i];
i++;
}
else
{
a[k]=a[j];
j++;
}
k++;
}
while(i<=mid)
{
c[k++]=a[i++];
}
while(j<=high)
{
c[k++]=c[j++];
}
for(i=low;i<=high;i++)
{
a[i]=c[i];
}}
void mergesort(int a[],int low,int high)
{
if(low<high)
{
int mid=(high-low)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
}
}
int main()
{
int i,n;
printf("enter the size of array\n");
scanf("%d",&n);
int arr[n];
srand(time(NULL));

for(i=0;i<n;i++)
{
arr[i]=rand()%1000000;
}
clock_t start=clock();
mergesort(arr,0,n-1);
clock_t end=clock();
double timetaken=((double)(end-start))/CLOCKS_PER_SEC;
printf("time taken is %F\t",timetaken);
return 0;
}

