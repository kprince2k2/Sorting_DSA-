#include<stdio.h>
#include<conio.h>

void PrintArray(int n,int array[10])
{
	int i;
	for(i=0;i<n;i++)
	{
	      printf("<-%d->",array[i]);
	}
}
void CreateArray(int n,int array[10])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element of Array:",i+1);
		scanf("%d",&array[i]);
		//PrintArray(n,array);
	}
	PrintArray(n,array);
}

void SelectionSort(int n,int array[10])
{
	int i,j,min,index,temp;
	for(i=0;i<n;i++)
	{
		min=array[i];
		for(j=i;j<n;j++)
		{
			if(array[j]<min)
			{
				min=array[j];
				index=j;
			}
		}
		temp=array[i];
		array[i]=array[index];
		array[index]=temp;
	}
	printf("\nArray after Selection Sort: ");
	PrintArray(n,array);
}

void main()
{
	int n,array[10];
	clrscr();
	printf("\nHow many elements you want to add:");
	scanf("%d",&n);
	CreateArray(n,array);
	SelectionSort(n,array);
	getch();
}