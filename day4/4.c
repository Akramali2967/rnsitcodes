#include <stdio.h>
void read_arr(int arr[],int arr_size)
  {
      for(int i=0;i<arr_size;i++)    
    {
         scanf("%d",&arr[i]);
    }
  }
void print_arr( int arr[],int arr_size)
   {
        for(int i=0;i<arr_size;i++)
    {
         printf("%d\t",arr[i]);
    }
   }
void search(int arr[],int arr_size,int key)
   {
       int first,last;int flag=0;
    for(int i=0;i<arr_size;i++)
    {
         if(key==arr[i])
         {
            flag++;
            if(flag==1)
              {
                  first=i;
              }
            else
              {
                last=i;
              }  
         }
    }
    if(flag==1)
       {
           last=first;
       }
   if(flag==0)
     {
         printf("Search Unsuccessful\n");
     } 
    else 
      {
          printf("Search Successful\n");
          printf("The first occuracne of the key is = %d\n",first);
          printf("The last occuracne of the key is = %d\n",last);
      } 
   }
int main()
{ 
    int arr[10], arr_size;
    printf("Enter the number of elements\n");
    scanf("%d", &arr_size);
    read_arr(arr, arr_size);
    printf("\nThe array elements are \n");
    print_arr(arr, arr_size);
    printf("\nEnter The Element To Be Searched:\n");
    int key;
    scanf("%d",&key);
    search(arr, arr_size,key);
}  