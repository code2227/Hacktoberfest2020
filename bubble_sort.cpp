##BUBBLE SORT

#include<iostream.h>
#include<conio.h>
#define max 40
void main()
{	clrscr();
int n,A[max], temp;
cout<<"\nEnter array size: ";
cin>>n;
cout<<"\nEnter array elements: ";
for(int i=0;i<n;i++)
{
cin>>A[i];
}
for(i=0;i<n;i++)
{
for(int j=0;j<n-1;j++)
{	if (A[j]>A[j+1])
{	temp=A[j];
A[j]=A[j+1];
A[j+1]=temp;
}
}
}
cout<<"\nSorted array is: ";
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
getch();
}
