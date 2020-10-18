#include<iostream.h>
#include<conio.h>
#define max 40
void merge(int a[], int p, int q, int r);
void mergeSort(int s[],int p, int r)
{	int q;
if(p<r)
{	q=(p+r)/2;
mergeSort(a,p,q);
mergeSort(a,q+1,r);
merge(a,p,q,r);
}
}
void merge(int a[], int p, int q, int r)
{	int f1=q-p+1;
int f2=r-p;
int lar[max], rar[max];
for(int i=0;i<=n1;i++)
lar[i]=A[p+i-1];
for(int j=0;j<=n2;j++)
rar[j]=A[q+j];
lar[f1+1]=2000;
rar[f2+1]=2000;
i=1;
j=1;
for(int k=p;k<=r;k++)
{	if(lar[i]<=rar[j])
{	A[k]=lar[i];
i=i+1;
}
else
{	A[k]=rar[j];
j=j+1;
}
}
}
void main()
{	clrscr();
int a[max];
int size;
cout<<"\nEnter array size: ";
cin>>size;
cout<<"\nEnter array elements: ";
for(int i=0;i<size;i++)
{	cin>>a[i];
}
mergeSort(a,0,size-1);
cout<<"\nSorted Array: ";
for(i=0;i<size;i++)
{	cout<<a[i]<<" ";
}
getch();
}
