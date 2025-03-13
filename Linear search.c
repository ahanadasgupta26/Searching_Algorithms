#include<stdio.h>
int a[10];
void getdata()
{
	int i;
	printf("ENTER 10 ELEMENTS: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
}
void search(int key)
{
	int i;
	int flag=-1;
	for(i=0;i<10;i++)
	{
		if(a[i]==key)
		{
			flag=i;
		}
	}
	if(flag!=-1)
	{
		printf("DATA FOUND IN POSITION %d,",flag+1);
	}
	else
	{
		printf("DATA NOT FOUND...");
	}
}
int main()
{
	int key;
	getdata();
	printf("ENTER THE ELEMENT WHICH YOU WANT TO FIND ");
	scanf("%d",&key);
	search(key);
	return 0;
}
