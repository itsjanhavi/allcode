//(1)
/*#include<stdio.h>
int main(){
 int arr[5]={2,3,5,6,8};
 arr[4]=25;
 printf("%d\n",arr[4]);
 return 0;
} */
//(2)
/*#include<stdio.h>
int main(){
  float arr[5] = {3.2,4.5,5.7,6.5,8.9};
  arr[4];
  printf("%f\n",arr[4]);
  return 0;
} */
//(3) 
/*#include<stdio.h>
int main(){
char arr[5]={'a','b','c','d','e'};
printf("%c\n",arr[3]);
return 0;
} */
//(4) 
/*#include<stdio.h>
int main(){
int arr[5];
for(int i=0;i<=4;i++){
printf("enter the number %d\n",i+1);
scanf("%d",&arr[i]);
}
for(int i=0;i<=5;i++){
printf("%d ",arr[i]);
}
return 0;
}*/
//(5) reversevprint
/*#include<stdio.h>
int main(){
int arr[4];
for(int i=0;i<=4;i++){
printf("enter the number %d\n",i+1);
scanf("%d",&arr[i]);
}
for(int i=5;i>=0;i--){
printf("%d ",arr[i]);
}
return 0;
} */
//(6) 
/*#include<stdio.h>
int main(){
int marks[10] = {95,90,31,25,100,50,15,89,97,30};
for(int i=0;i<=10;i++){
if(marks[i]<35){
printf("%d ",i);
}
}
return 0;
} */
// are the following array declarations correct?
// int a(15); not correct int a [15] its is a correct 
//int size=10,b[size]; int size = 10; int b[10]; its is a correct
// int c= {0,1,2}; not correct 

//(7) which element of the array does this expression reference
// memory allocation in arrays 

// predict the output 
/*#include<stdio.h>
int main(){
int num[26],temp;
num[0]=100;
num[25]=200;
temp=num[25];
num[25]=num[0];
num[0]=temp;
printf("\n%d%d",num[0],num[25]);
return 0;
} */
//(8) predict the output 
/*#include<stdio.h>
int main(){
int sub[50],i;
for(i=0;i<=48;i++);
{
sub[i]=i;
printf("\n%d",sub[i]);
}
return 0;
} */

//(9) 
/*#include<stdio.h>
int main(){
int i,a=2,b=3;
int arr[2+3];
for(i=0;i<a+b;i++){
scanf("%d",&arr[i]);
printf("\n%d",arr[i]);
}
return 0;
} */

//(10) user input and than number of sum 
/*#include<stdio.h>
int main(){
int n;
printf("enter the size of array : ");
scanf("%d",&n);
int arr[n];
for(int i=0;i<=n-1;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<=n-1;i++){
printf("%d ",arr[i]);
}
return 0;
} */
//(11) sum of array
/*#include<stdio.h>
int main(){
int arr[5]={1,2,3,4,5};
int sum = 0;
for(int i=0;i<=4;i++){
sum = sum + arr[i];

}
printf("%d\n" ,sum);
return 0;
} */
//(12) calculate the product of all the elements in the given array.
/*#include<stdio.h>
int main(){
int n;
printf("enter the size of array:");
scanf("%d",&n);
int arr[n];
printf("%d ",n);
printf("\n");
for(int i=0;i<=n-1;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<=n-1;i++){
printf("%d ",arr[i]);
}
printf("\n");
int product = 1;
for(int j=0;j<=n-1;j++){
product = product * arr[j];
}
printf("%d \n",product);
return 0;
} */ 
//**(13) find the maximum value out of all the elements in the array,
/*#include<stdio.h>
int main(){
int n;
printf("enter the number :");
scanf("%d",&n);
int arr[n];
printf("%d " ,n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int max = arr[0];
for(int i=1;i<n;i++){
if(max<arr[i]){
 max = arr[i];
}
}
printf("%d" ,max);
return 0;
} */
//(14) given an array of integers change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
/*#include<stdio.h>
 int main(){
 int n;
 printf("enter the number :");
 scanf("%d",&n);
 int arr[n];
 printf("%d " ,n);
  for(int i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
    for(int i=0;i<=n-1;i++)
    {
    if(i%2!=0)
    {
    arr[i]*=2;
 }
   else 
   {
   arr[i]+=10;
  }
   // for(int i=0;i<=n-1;i++)
   // {
    printf("%d ",arr[i]);
   //}
   }
 return 0;
 } */
//(15) count the number of elements in given array greater than a given number x.
/*#include<stdio.h>
int main(){
int n;
int x,count;
printf("enter the number:");
scanf("%d",&x);
printf("enter the number :");
scanf("%d",&n);
int arr[n];

 for(int i=1;i<=n;i++) 
 {
 scanf("%d",&arr[i]);
 }
  for(int i=0;i<n;i++)
  {
  if(arr[i]>x){
   count++;
  }
}
printf("%d",count );
return 0;
} */
 
// (16) find the difference between the sum of elemrnts at even indices to the sum of elemente at odd indices.
/*#include<stdio.h>
int main()
{
int n;
printf("enter the number :");
scanf("%d" ,&n);
int arr[n];
int sumeven = 0;
int sumodd = 0;

for(int i=1;i<=n;i++)
{
scanf("%d" ,&arr[i]);
}
  for(int i=1;i<=n;i++)
 {
   if(i%2==0){
   sumeven +=arr[i];
   }
   else{
   sumodd +=arr[i];
   }
}
 int res = sumeven-sumodd;
 printf("%d" ,res);
 return 0;
} */

//(17) find the total number of pairs in the array whose sum is equal to the given value x.
/*#include<stdio.h>
int main(){
int n;
int x;
int totalpair = 0;
printf("enter the number:");
scanf("%d" ,&x);
printf("enter the number :");
scanf("%d" ,&n);
int arr[n];
 for(int i=1;i<=n;i++)
{
scanf("%d" ,&arr[i]);
}
 for(int i=1;i<=n;i++){
   for(int j=i+1;j<=n;j++){
     if(arr[i]+arr[j]==x){
     totalpair++;
     printf("(%d,%d)\n",arr[i],arr[j]);
     }
  }
}
printf("%d",totalpair);
return 0;
} */
//(18) count the number of triplets whose sum is equal to the given value x;
/*#include<stdio.h>
int main(){
int n;
int x;
int totalpair = 0;
 printf("enter the number:");
 scanf("%d" ,&x);

 printf("enter the number :");
 scanf("%d" ,&n);

 int arr[n];
 for(int i=1;i<=n;i++)
{
scanf("%d" ,&arr[i]);
}
 for(int i=1;i<=n;i++)
 {
 for(int j=i+1;j<=n;j++)
 {
   for (int k=j+1;k<=n;k++){
   if(arr[i]+arr[j]+arr[k]==x);
   totalpair++;
     printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
   }
 }
}
printf("%d",totalpair);
return 0;
} */

// find the second largest elements in the given array.
/*#include<stdio.h>
int main()
{
int n;
int max;
int  smax;
printf("enter the number :");
scanf("%d" ,&n);
int arr[n];
 for(int i=1;i<=n;i++)
{
scanf("%d" ,&arr[i]);
}
   for(int i=0;i<=n;i++)
   {
   if(max<arr[i]){
   smax = max;
   max = arr[i];
   }
   else if(smax<arr[i]&& max!=arr[i]){
  smax = arr[i];
  }
}
printf("%d",smax);
return 0;
}*/
//H.W if an array arr contains n elements then check if the given array is a palindram or not ( 1 2 3 2 1 )

// Rotate the given array a by k steps where k is non negative.
//note: k can be greater then n as well where n is the size of array

// 
















 
