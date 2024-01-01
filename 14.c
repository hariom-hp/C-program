#include<stdio.h>
int main(){
    int a[25],i,large,small,n;
    printf("enter the max element (max25)\n");
    scanf("%d",&n);
    printf("enter the array any element %d\n",n);
   for (i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   large=a[0];
   small=a[0];
   for ( i = 1; i<n; i++)
   {
    if (a[i]>large){
    large=a[i];
    }
    if (a[i]<small){
        small=a[i];
    }
   }
printf("The largest element from the given array is: %d\n", large);
printf("the smallest element from the given array is:%d\n",small); 
   
  return 0; 

}