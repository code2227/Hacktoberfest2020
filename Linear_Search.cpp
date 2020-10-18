#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{	clrscr();
int i, a[100], b, n, c=0;
cout<<"Enter no of elements you want to enter:\t";
cin>>n;
cout<<"Enter elements in array";
for(i=0;i<n;i++)
{	cout<<"a["<<i<<"]=\t";
		cin>>a[i];
}
cout<<"Enter element you want to search:\t";
cin>>b;
for(i=0;i<n;i++)
{	if(b==a[i])
		{	cout<<"element found at"<<i<<"th index";
			getch();
			exit(0);
}
		else
		c++;
}
if(c!=0)
cout<<"element not found";
getch();
}
