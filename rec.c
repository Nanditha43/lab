#include<stdio.h>
int sort(int arr[],int n)
{
 int temp;
 for (int i=0;i<n;i++)
 {
  for (int j=0;j<n-1;j++)
  {
   if (arr[j+1]<arr[j])
   {
   temp=arr[j];
   arr[j]=arr[j+1];
   arr[j+1]=temp;
  }
  }
 }
}

void binary_search(int arr[], int first, int last, int key)

{
    int mid;
    if (first>last)
    {
      printf("Key not found\n");
      return;
    }

    mid =(first+last) / 2;
    if (arr[mid] == key)
    {
     printf("%d found in %d\n",key,mid+1);
    }
    else if (arr[mid] > key)
    {
     binary_search(arr,first,mid - 1,key);
    }
    else if (arr[mid]<key)
    {
     binary_search(arr,mid + 1,last,key);
    }
}


void main()
{
int arr[50],searchTerm,n,bin;
printf("enter the number of array elements:\n");
scanf("%d",&n);
printf("Enter the array\n");
for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}

printf("enter the number to be searched:\n");
scanf("%d",&searchTerm);
sort(arr,n);
  printf("sorted array:\n");
  for (int i=0;i<n;i++)
   {
    printf("%d \t",arr[i]);
    }
  printf("\n");
  binary_search(arr,0,n,searchTerm);

}
