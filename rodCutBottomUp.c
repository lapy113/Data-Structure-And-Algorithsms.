
#include<stdio.h> 
#include<limits.h> 

int max(int a, int b) { return (a > b)? a : b;} 
  

int cutRod(int price[], int n) 
{ 
   int R[n+1]; 
   R[0] = 0; 
   int i, j; 
  
   
   for (i = 1; i<=n; i++) 
   { 
       int max_val = INT_MIN; 
       for (j = 0; j < i; j++) 
         max_val = max(max_val, price[j] + R[i-j-1]); 
       R[i] = max_val; 
   } 
  
   return R[n]; 
} 
  
/* Driver program to test above functions */
int main() 
{ 
     int n;
       	 float x;
 	 printf("Enter the value of x : from 1,0.5,0.25,0.20 ");
	 scanf("%f",&x);
	 
	 printf("Enter the length of n :");
	 scanf("%d",&n);
	 
	 int t= (int)(n/x);
	 
	 //array for prices
   	 int arr[t]; 
 	 
 	 printf("Enter the prices of length of rods :");
 	 for(int i=0; i<t; i++){
 	 	scanf("%d",&arr[i]);
 	 }
    
    
    printf("Maximum Obtainable Value is %dn", cutRod(arr, t)); 

    return 0; 
} 

