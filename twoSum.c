/*Given nums = [2, 7, 11, 15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1]*/
#include<stdio.h>
#include<stdlib.h>
int twoSum(int arr[],int n,int t);
int getArray(int arr[],int n);
int dispArray(int arr[],int n);
int main(){
          int t,n,i;
          printf("enter target element");
          scanf("%d",&t);
          printf("enter array size");
          scanf("%d",&n);
          int arr[n],arr1[2];
          printf("enter array elements");
          getArray(arr,n);
          dispArray(arr,n);
          twoSum(arr,n,t);
          
}
int twoSum(int arr[],int n,int t){
          
          int i,j,f;
          dispArray(arr,n);
          printf("Started seraching for target %d\n",t);
          for(i=0;i<n;i++){
                          for(j=0;j<n;j++){
                                      int f=0;
                                      if(i!=j){
                                                f=arr[i]+arr[j];
                                                if(f==t){
                                                     printf("target founded\n");
                                                     printf("%d %d ",i,j);
                                                     exit(1);
                                           }
                          }}
          
          }}
          

int getArray(int arr[],int n){
                          int i;
                          for(i=0;i<n;i++){
                                      scanf("%d",&arr[i]);
                          }
}
int dispArray(int arr[],int n){
                          int i;
                          for(i=0;i<n;i++){
                                      printf("%d",arr[i]);
                          }
}



