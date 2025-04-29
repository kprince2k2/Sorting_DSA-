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
	printf("\n");
	PrintArray(a,size);
}

void BubbleSort(int a[10],int size)
{
	int i,j,temp,flag=0;
	for(i=0;i<size-1;i++)
	{
		printf("\n");
		for(j=0;j<(size-i);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
			if(flag==0)
			{
				break;
			}
		}

	}
	printf("\nArray After Bubble Sort: ");
	PrintArray(a,size);
}

void main()
{
	int size,a[10];
	clrscr();
	printf("\nEnter Size of Array: ");
	scanf("%d",&size);
	CreateArray(a,size);
	BubbleSort(a,size);
	getch();
}