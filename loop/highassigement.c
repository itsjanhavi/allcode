//(1) take an array from the user as input and reverse it before printing it to the user
/*#include<stdio.h>
int main(){
   int n;
   printf("enter the number ");
   scanf("%d",&n);
   int arr[n];
   
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
      for(int j=n-1;j>=0;j--){
         printf("%d",arr[j]);
      }
return 0;
} */
//(2)take an array from the user as input and print the mean ,median ,and mode of the array
/*#include<stdio.h>
int main(){
  int n,t;
  int sum=0;
  printf("enter the array no;");
  scanf("%d" ,&n);
  int arr[n];
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
      // for(int j=0;j<n;j++){
        //  sum=+arr[j];
      // }
       for(int j=n-1;j>=1;j--){
        for(int i=0;i<j;i++){
           if (arr[i]>arr[i+1]){
               t = arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=t;
         }
       }
    }
    printf("sorted array is as follow:\n");
    for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
    int mean;
     for(int i=0;i<n;i++){
       sum=sum+arr[i];
       mean=sum/n;
     }
     printf("mean :%d\n",mean);
     // calculate the  median
     int median;
       if(n%2==0){
        median=(arr[n/2-1]+arr[n/2])/2;    
       }
       else{
         median=arr[n/2];
       }
     
     printf("median:%d\n",median);
      // calculate the mode
      int mode,max=0,c=0;
       for(int i=0;i<n;i++){
       c=0;
           for(int j=i+1;j<n;j++){
             if(arr[j]==arr[i]){
               c++;
             }
           }
           if(c > max){
             max=c;
             mode=arr[i];
           }
       }
       printf("mode:%d\n",mode);
    
return 0; 
}*/  

//(3) take an array of size n and a number k from the user as input and print the elements of an array in a rotated manner with a gao of k e.g  us say the array is 3,6,7,5,10 and the value of k=3 the output should be 6 5 3 10 7 

//(4) take an array from the user as input and find duplicate elements in an array:
/*#include<stdio.h>
 int main(){
  int n;
  printf("enter the array:");
  scanf("%d",&n);
  int arr[n];
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++){
      for(int j=i+1;j<=n;j++){
         if(arr[i]==arr[j]){
         printf("%d is a duplicate array\n" ,arr[i]);
         
         break;
             }
           }
        }
 return 0;        
} */

//(5) take two sorted arrays from the user as input and merge them into a single sorted array 
/*#include<stdio.h>
int main(){
 int r;
 printf("enter the rows:");
 scanf("%d",&r);
 
  int a[r];
  printf("enter the elemens of the first sorted array :");     
    for(int i=0;i<r;i++){
      scanf("%d",&a[i]);
    }
 int b[r];
 printf("enter the elements of the second sorted array:");
 for(int j=0;j<r;j++){
      scanf("%d",&b[j]);
    }
  int k[2 * r];
 int i=0,j=0,m=0;
 while(i<r && j<r){
    if(a[i]<=b[j]){
       k[m]=a[i];
       i++;
    }
    else{
       k[m]=b[j];
       j++;
    }
    m++;
 }
   // if there are any remining element in array a or b 
   for(int i=0;i<r;i++){
       k[m]=a[i];
   } 
    for(int j=0;j<r;j++){
       k[m]=b[j];
    }
    printf("merged sorted array :");
    for(int i=0;i<2*r;i++){
       printf("%d ",k[i]);
    }
    printf("\n");
    return 0;
  } */
//(6) given an unsorted array of size n that contains only non- neggative integers find a contiguous subarray return the subarray which comes first on moving from left to right let us say the array is 3 6 7 5 10 and the value of s = 12 the output should br 7,5
/*#include<stdio.h>
int main(){
int n,s;
int a=0;

printf("enter the number:");
scanf("%d",&n);
printf("enter the number of s:");
scanf("%d",&s);

int arr[n];
  for(int i=0;i<n;i++){
     scanf("%d" ,&arr[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
       if(arr[i]+arr[j]==s){
           a++;
           printf("(%d,%d)\n",arr[i],arr[j]);
       }
    }
 }
 printf("%d ",a);
    return 0;
 } */

//(8) taketwo sorted arrays of size m and n from the user as input and return the mediam of the two sorted arrays.
/*#include<stdio.h>
int main(){
 int r;
 printf("enter the arrays:");
 scanf("%d",&r);
 
  int a[r];
  printf("enter the elemens of the first sorted array :");     
    for(int i=0;i<r;i++){
      scanf("%d",&a[i]);
    }
 int b[r];
 printf("enter the elements of the second sorted array:");
 for(int j=0;j<r;j++){
      scanf("%d",&b[j]);
    }
  int k[2 * r];
 int i=0,j=0,m=0;
 while(i<r && j<r){
    if(a[i]<=b[j]){
       k[m]=a[i];
       i++;
    }
    else{
       k[m]=b[j];
       j++;
    }
    m++;
 }
   // if there are any remining element in array a or b 
   for(int i=0;i<r;i++){
       k[m]=a[i];
       
   } 
    for(int j=0;j<r;j++){
       k[m]=b[j];
       
    }
    printf("merged sorted array :");
    for(int i=0;i<2*r;i++){
       printf("%d ",k[i]);
    }
    printf("\n");
    int median ;
    for(int i=0;i<k[m];i++){
       if(k[m] % 2==0){
       median = (k[m /2-1]+k[m/2])/2.0;
      // median=k[m]/2(k[m]+1)/2;
       }
       else{
       median = k[m/2];
        //median=k[m]/2;   
       }
    }
    printf("median number%d ",median);
     
    printf("\n");
    return 0;
 } */
 //(9) take a socrted array from the user as input and find a number using binary search the array:
/* #include<stdio.h>
 int main(){
    int n,m,l=0;
    printf("enter the array:");
    scanf("%d" ,&n);
     int arr[n]; 
       for(int i=0;i<n;i++){
         scanf("%d" ,&arr[i]);
       }
       int h=n-1;
       printf("enter the number to find : ");
       scanf("%d",&m);
       
       while(l<=h){
        int mid =(l+h)/2;
         if(arr[mid]==m){
           printf("number found at index :%d ",mid);
           break;
         }
         else if(arr[mid]<m){
         l=mid+1;
         }
         else{
         h=mid-1;
         }
     }
     
return 0;     
 } */







