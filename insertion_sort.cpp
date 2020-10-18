#include<iostream.h>
#include<conio.h>
#define max 100
void main()
{	clrscr();
int A[max],i,j, key, size;
cout<<"\nEnter array size: ";
cin>>size;
cout<<"\nEnter array elements: ";
for(i=0;i<size;i++)
{
cin>>A[i];
}
for(i=1;i<size;i++)
{
key=A[i];
j=i-1;
while (j>=0 && a[j]>key)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=key;
}
cout<<"\nSorted array is: ";
for(i=0;i<arraySize;i++)
cout<<a[i]<<" ";
getch();
}
