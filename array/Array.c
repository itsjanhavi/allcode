// (1) create a array of even no 
/*#include<stdio.h>
int main(){
 int n;
 printf("enter the number:");
 scanf("%d" ,&n);
 int arr[n];

 for(int i=0;i<n;i++)
{


scanf("%d" ,&arr[i]);
}
int m=0;
for(int i=1;i<n;i++){
if(i%2!=0){
arr[m] = arr[i];
m++;
}
}
for(int j=0;j<m;j++){
printf("%d ",arr[j]);
}
return 0;
} */
//(2) create a array of old number :
/*#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d" ,&n);
int arr[n];
for(int i=1;i<=n;i++)
{
scanf("%d" ,&arr[i]);
}
int m=0;
for(int i=1;i<n;i++){
if(i%2==0){
arr[m] = arr[i];
m++;
}
}
for(int j=0;j<m;j++){
printf("%d ",arr[j]);
}
return 0;

} */

//(3) table of 3
/*#include<stdio.h>
 int main(){
 int n,a;
 printf("enter the number");
 scanf("%d" ,&n);
 int arr[10];

  for(int i=0;i<10;i++){
  arr[i] = ( i + 1 ) * n;
 }
   for(int j=0;j<10;j++){
   printf("%d\n",arr[j]);
  }
 
 return 0;
 } */
//(4)Write a program to create an array of natural numbers till 20 and print it.
/*#include<stdio.h>
 int main(){
 int n;
 printf("enter the number :");
 scanf("%d" ,&n);
 int arr [n];
   for(int i=0;i<n;i++)
   {
    scanf("%d" ,&arr[i]);
   } 
    for(int j=0;j<n;j++)
    {
    printf("%d " ,arr[j]);
    }
return 0; 
} */

//(5)Given an array and its size, print the array in reverse order. (l=[5,4,9,2,1,3])
/*#include<stdio.h>
int main(){
int arr[6]={5,4,9,2,1,3};
int m[6];
 for(int i=0;i<6;i++){
 m[i] = arr[i];
}
 for(int i=5;i>=0;i--){
 printf("%d ",m[i]);
 }
return 0;
} */
//(6) given an array and its size printf alternate elements A = [5,4,9,2,1,0]from the last   
/*#include<stdio.h>
int main(){
int arr[6]={5,4,9,2,1,0};
int j=0;
for(int i=6-1;i>=0;i=-2){
arr[j]=arr[i];
j++;
}
for(int i=0;i<j;i++){
printf("%d ",arr[i]);
} 
return 0; 
} */ // not solve careat this code
// (7) take no from user & check whether it exist or not A[1,2,3,4,5,6,7,]
/*#include<stdio.h>
 int main(){
 int arr[7]= {1,2,3,4,5,6,7};
 int x;
 int found =0;

 printf("enter the number:");
 scanf("%d" ,&x);

  for(int i=0;i<7;i++){
   if(arr[i]==x){
   found = 1;
    break;
    }
 }
 if(found){
 printf("the number exists in the array .\n");
 }
  else{
  printf("the number boes not exist in the array.\n ");
  }

  return 0;
} */
//(8) careat a array of 7 no from user & printf true it the  complete list consist of consecsative numbers for not 
/*#include<stdio.h>
int main(){
int n;
int fount = 0;
printf("enter the number :");
scanf("%d",&n);
int arr[n];
 for(int i=0;i<n-1;i++){
 scanf("%d ",&arr[i]);
 }
 for(int i=0;i<n;i++){
  if(arr[i+1]-arr[i]==1){
  fount = 1;
  break ;
   } 
 }
if(fount){
printf("consecuments number\n");
}
else{
printf("not consecuments number\n");
}
return 0;
} */ // not a corret code 

//(9) sum& average of elements in list 
/*#include<stdio.h>
 int main(){
 int n,A;
 int sum = 0;
 printf("enter the number:");
 scanf("%d ",&n);
 int arr[n];
   for(int i=0;i<n;i++){
   scanf("%d ",&arr[i]);
 }
  for(int i=0;i<n;i++){
  sum = sum + arr[i];
 }
  A = sum / n;
  
 printf("%d ",sum);
 printf("%d ",A);
 
 return 0;
} */

 //(10) make flowchart to count total accurance of a number in array ;
 /*#include<stdio.h>
  int main(){
  int n,a,c;
  printf("enter the number :");
  scanf("%d ",&n);
  
  int arr[n];
  for(int i=0;i<n;i++){
  scanf("%d" ,&arr[i]);
  }
  printf("enter the number a:");
  scanf("%d",&a);
    for(int i=0;i<n;i++){
    if(arr[i]==a){
    c++;
    }
    }
   printf("%d\n" ,c);
   return 0;
 } */
//(11) make a flowchart to count positiveand negative elements in a list take elements as input from the user:
/*#include<stdio.h>
 int main(){
 int n;
 int pc=0,nc=0;
 printf("enter the number :");
 scanf("%d",&n);
 int arr[n];
   for(int i=0;i<n;i++){
   scanf("%d ",&arr[i]);
 }
 for(int i=0;i<n;i++){
 if(arr[i]>0){
 }
 else{
 nc = nc + 1;
 }
 }
 printf("%d\n",pc);
 printf("%d\n",nc);
 return 0;
} */
//(12)create a list that stores all the factors of a number  n. take n as input from the user :
/*#include<stdio.h>
 int main(){
 int n;
 printf("enter the number :");
 scanf("%d",&n);
 int arr[n];
 int count =0;
  for(int i=1;i<=n;i++){
    if(n%i==0){
    arr[count]=i;
    count++;
   }
 }
 printf("factors of %d: ",n);
 for(int i=0;i<count;i++){
  printf("%d ",arr[i]);
 }
  return 0;
} */
//(13) create a list that stores all the prime numbers up to n take n as input from the user.
/*#include<stdio.h>
 int main(){
 int n;
 printf("enter the number:");
 scanf("%d ",&n);
 int arr[n];
 int count =0;
  
  for(int i=2;i<n;i++){
  int isprime = 1;
  
  for(int j=2;j*j<=i;j++){
  if(i%j==0){
    isprime = 0;
  break;
  } 
 }
 if(isprime){
 arr[count] = i;
 count++;
 }
}
for(int i=0;i<count;i++){
printf("%d ",arr[i]);
}
return 0;
}*/
//(14)create a list that stores perfect numbers upto n as input from the user.
/*#include<stdio.h>
 int main(){
 int n,sum=0;
 int a = 0;
 printf("enter the number :");
 scanf("%d" ,&n);
 int arr[n];
   for(int i=0;i<n;i++){
   scanf("%d ",&arr[i]);
   }
   for(int i=0;i<n;i++){
   int sum =0;
   for(int j=1;j<=i;j++){
   if(i%j==0){
   sum = sum +j;
   }
   }
   if(sum==i){
   arr[a]=i;
   a++;
   }
   }
 for(int i=0;i<a;i++){
 printf("%d ",arr[i]);
 }
 return 0;
} */
//(15) creat a list that stores the factorial of first n natural numbers take n as input from the user :
/*#include<stdio.h>
 int main(){
 int n;
 int arr[i];
  for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
   printf("enter the number:");
 scanf("%d" ,&n);
 int arr[n];
 int fact =1;
  
  for(int i=0;i<n;i++){
  fact = fact * (i+1);
  arr[i]=fact;
  } 
  
  for(int i=0;i<n;i++){
  printf("%d ",arr[i]);
  } 
  return 0;  
}  */
//(16)  create a list that stores armstrong number up to n take n as input from the use


//(17) write a program to create a list of 10 number from the user and sum the elements on odd opsitions  as odder and an even positions as even 
 
/*#include<stdio.h>
int main(){
int n;
int sum_even=0 ,sum_odd=0;
printf("enter the number:");
scanf("%d" ,&n);
int arr[n];

  for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
   for(int i=0;i<n;i++){
     if(i%2==0){
     sum_even +=arr[i];
     }
     else{
     
     sum_odd +=arr[i];
     }
   }
   printf("%d\n",sum_even);
   printf("%d",sum_odd);
   return 0;
   
} */

// (18)write program to input 5 names from the user and print them 
/*#include<stdio.h>
int main(){
  int n;
  printf("enter the number :");
  scanf("%d",&n);
  char name [5][10];
  
  for(int i=0;i<n;i++){
  scanf("%s" ,name[i]);
 }
  for(int  j=0;j<n;j++){
  printf("%s ",name[j]);
  }
  
  return 0;
} */

//(19)wap to find a duplicate elements from a given array of integers. 
/*#include<stdio.h>
 int main(){
 int arr[7]={1,2,5,4,5,6,7};
  for(int i=0;i<=6;i++){
    for(int j=i+1;j<=6;j++){
       if(arr[i]==arr[j]){
       printf("%d is a duplicate array\n",arr[i]);
        break;
       }
    }
}
return 0; 
} */
 //(20) make a flowchart to count the total occurrences of a number in the list input the numbers from the user 
/* #include<stdio.h>
 int main(){
   int n,a,c;
   printf("enter the number :");
   scanf("%d" ,&n);
   
   printf("enter the number of a:");
   scanf("%d" ,&a);
   
      int arr[n];
      for(int i=0;i<n;i++){
        scanf("%d" ,&arr[i]);
      }
         for(int i=0;i<n;i++){
          if (a==arr[i]){
          c++;
          }
       }
   printf("occurrences number %d\n",a);
   printf("count of occurrences number %d ",c);
 return 0;
} */
//(21) construct a flowchart to create a list of n items where n is input from the user then input n names from the user and add them to the list:
/*#include<stdio.h>
 int main(){
  int n;
  printf("enter the number :");
  scanf("%d",&n);
  char name [n][100];
  
  for(int i=0;i<n;i++){
  scanf("%s" ,name[i]);
 }
   for(int i=0;i<n;i++){
   printf("%s ",name[i]);
   
  }
  printf("\n");
     for(int  j=n-1;j>=0;j--){
     printf("%s ",name[j]);
   }
   printf("\n");
  return 0; 
} */
//(22) construct a flowchart to input n number from the user store them in a list them show how to determine the maximun number .
/*#include<stdio.h>
 int main(){
 int n;
 int max=0;
  printf("enter the number :");
  scanf("%d ",&n);
  int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d" ,&arr[i]);
   }
    for(int i=0;i<n;i++){
      if(arr[i]>max){
       max=arr[i];
      }
    }
   printf("maximun number %d ",max);
   printf("\n");
   return 0;
} */
//(23) 









