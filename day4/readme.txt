**********************************************************************************
1. Complete the following code segment with appropriate C statements
***********************************************************************************
#include <stdio.h>

int main()
{
    // array declaration 
    int arr[10], arr_size
    printf("Enter the number of elements \n");
    scanf(      );
    printf("Enter the array elements \n");
    for(    )
    {
         scanf("")
    }
    printf("The elements are \n");
        for(    )
    {
         printf("")
    }
    printf("\nThe even numbers in the array are\n");
    for()
    {
         if()
            printf("%d\t", arr[i]);
    }
    return 0;
}

**********************************************************************************
2. Complete the following program using the tempalte
***********************************************************************************
#include <stdio.h>
void read_arr(     );
void print_arr(     );
void print_odd(    );
int main()
{
    // array declaration 
    int arr[10], arr_size;
    printf("Enter the number of elements\n");
    scanf("%d", &arr_size);
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("The  odd elements are\n");
    print_odd(arr, arr_size);
}  

***********************************************************************************
3. Complete the following code segment with appropriate C statements
***********************************************************************************
#include <stdio.h>
//function prototypes 
void read_arr(    );
void print_arr(    );
int ret_max(    );
int main()
{
    // array declaration 
    int arr[10], arr_size;
    printf("Enter the number of elements \n");
    scanf("%d", &arr_size);
    printf("Enter the elements\n");
    read_arr(arr, arr_size);
    printf("The array elements are \n");
    print_arr(arr, arr_size);
    printf("\nThe  maximum element in the arrays is %d\n", ret_max(arr, arr_size));
    return 0;
}  

void read_arr( ) 
{
    for(    )
    {
         scanf(    );
    }
}
    
void print_arr( ) 
{
    for( )
    {
         printf(   );
    }
}
    
 int ret_max( )
 {
    int max=arr[0];
    .
    .
    .

    return max;
 }
**********************************************************************************
4. Write a C program to  search a specified eleent in array of random elements.
if the search  is successful then,  the program should  display the following
1. Search is successful 
2. the position of first occurance
3. the position of the last occurance 

Example 1
given array  {11,22,33,33,66,55,88,11,33,11}; and key ==11
o/p   
Search Successfull                                                                                                  
The first occuracne of the key is = 1                                                                               
The last occuracne of the key is = 10    

Example 2
given array   {22,33,33,66,55,88,11,33,11,55}; and key =33
o/p
Search Successfull                                                                                                  
The first occuracne of the key is = 2                                                                               
The last occuracne of the key is = 8     

Example 3
given array   {22,33,33,66,55,88,11,33,11,55}; and key =88
o/p
Search Successfull                                                                                                 
The first occuracne of the key is = 6                                                                              
The last occuracne of the key is = 6    

Example 4
given array   {22,33,33,66,55,88,11,33,11,55}; and key =99
o/p
Search Failure  
***********************************************************************************
