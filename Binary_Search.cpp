#include<iostream.h>
#include<conio.h>
void main()
{	clrscr();
int a[20], n, low=0, s, high, mid,c=0;
cout<<"enter no of elements you want to enter in array :\t";
cin>>n;
for(int i=0;i<n;i++)
{	cout<<"a["<<i<<"]=\t";
cin>>a[i];
}
high=n-1;
mid=(low+high)/2;
cout<<"Enter element to search";
cin>>s;
while(low<=high)
{	if(a[mid]==s)
{	cout<<"found";
c++;
break;
}
else if(s<a[mid])
high=mid-1;
else
low=mid+1;
mid=(low+high)/2;
}
if(c==0)
cout<<"not found";
getch(); 
}
