#include<stdio.h>
#include<conio.h>

void PrintArray(int a[10],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("<-%d->",a[i]);
	}
}

void CreateArray(int a[10],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("\nEnter %d Element of Array:",i+1);
		scanf("%d",&a[i]);
		printf("Element Added\n");
	}
	printf("\n\n");
	PrintArray(a,size);
}

void InsertionSort(int a[10],int size)
{
	int i,j,temp;
	for(i=1;i<size;i++)
	{
	     j=i-1;
	     temp=a[i];
	     while(j>=0 && temp<a[j])
	     {
		a[j+1]=a[j];
		j=j-1;
	     }
	     a[j+1]=temp;
	}
	printf("\nArray after Insertion Sort: ");
	PrintArray(a,size);
}


void main()
{
	int size,a[10];
	clrscr();

	printf("\nEnter Size of Array: ");
	scanf("%d",&size);
	CreateArray(a,size);
	InsertionSort(a,size);
	getch();
}