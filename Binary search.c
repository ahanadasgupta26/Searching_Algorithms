#include<stdio.h>
int bsearch(int a[],int size,int key)
{
	int left=0;
	int right=size-1;
	while(left<=right)
	{
		int mid=left+(right-left)/2;
		if(a[mid]==key)
		{
			return mid;
		}
		if(a[mid]<key)
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	return -1;
}
int main()
{
	int size,key;
	printf("ENTER THE SIZE OF THE ARRAY : ");
	scanf("%d",&size);
	int a[size];
	printf("ENTER THE ELEMENTS OF THE ARRAY IN SORTED ORDER : ");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ENTER THE VALUE TO SEARCH : ");
	scanf("%d",&key);
	int result=bsearch(a,size,key);
	if(result!=-1)
	{
		printf("ELEMENT FOUND AT INDEX %d\n",result+1);
    }
    else
    {
    	printf("ELEMENT NOT FOUND IN THE ARRAY \n");
	}
	return 0;
}
