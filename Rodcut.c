#include<stdio.h> 
#include<limits.h> 
  

int max(int a, int b) { 
	return (a > b)? a : b;} 
  

int cutRod(int price[], int n) 
{ 
   	if (n <= 0) 
  	   return 0; 
 	  int max_val = INT_MIN; 
  

	   for (int i = 0; i<n; i++) 
	         max_val = max(max_val, price[i] + cutRod(price, n-i-1)); 
  
  	 return max_val; 
} 
  

int main() 
{ 	 int n;
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
 	 
   	 printf("Maximum Obtainable Value is %d", cutRod(arr, t)); 
    
    return 0; 
} 

