#include <iostream.h>
#include <conio.h>
#define max 10
int partition(int a[], int p,int r )
{
	int x=a[r],temp,i=p-1;
	for(int j=p;j<r;j++)
	{  if(a[j]<=x)
		{
		i=i+1;
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
	temp=a[i+1];
	a[i+1]=a[r];
	a[r]=temp;
	return (i+1);
}

void quickSort(int a[],int p,int r)
{	int mid;
	if(p<r)
		{	mid=partition(a,p,r);
			quickSort(a,p,mid-1);
			quickSort(a,mid+1,r);
		}
}

void main()
{
	clrscr();
	int a[max],size;
	cout<<"\n Enter Size:\t";
	cin>>size;
	cout<<"\n Enter Elements:\n";
	for (int i = 0; i < size; i++)
	{
		cin>>a[i];
	}
	quickSort(a,0,size-1);
	cout<<"\nSorted array is:\t";
	for (int j = 0; j < size; j++)
	{
		cout<<a[j]<<"\t";
	}
	getch();

}
