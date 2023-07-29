// (1) write a program to print integers from 1 to the given integer (N) 
/*#include<stdio.h>
int main(){
int n;
printf("enter the number :");
scanf("%d" ,&n);

for(int i=1;i<=n;i++){
  printf("%d \n" ,i);
}
return 0;

} */
 
 //(2) giventwo integar numbers m and n write a program to print the integers from mand n;
/*#include<stdio.h>
 int main(){
 int n;
 
 printf("enter the number :");
 scanf("%d" ,&n);
  
for ( int m=2;m<=n;m++){
   printf("%d \n" ,m);
}
return 0;
 } */
 
// (3) write a program to print a solid spuare puttern of n rows and n cotumns using the asterisk character (*) where integervn is given as an input ;
/*#include<stdio.h>
int main(){
int n;

printf("entewr the numbers :");
scanf("%d" ,&n);
for ( int i=1;i<=n;i++){
for (int j=1;j<=n;j++){
printf("*");
}
printf("\n"); 
}
return 0;
} */

// given two integers m and n write a program to print a solid rectangle pattern of m rows and n
/*#include<stdio.h>
int main(){
int m,n;
printf("enter the number: ");
scanf("%d" ,&m);
printf("enter the number :");
scanf("%d" ,&n);

for(int i=1;i<=m;i++){
for(int j=1;j<=n;j++){
printf("*");
}
printf("\n");
}
return 0;
} */

// (5)given an integer number (n) as input write a program to print the right angled triangular pattern of n line using on asterisk (*) character 
/*#include<stdio.h>
int main(){
int n;
printf("enter the number :");
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
printf("*");
}
printf("\n");
}
return 0;
} */

//(6) given an integer number (n) as input write a program to print thr sum of first n natural numbers:
/*#include<stdio.h>
int main(){
int n,sum;
printf("enter the number :");
scanf("%d" ,&n);

for(int i=1;i<=n;i++){
sum = sum + i;
printf("%d " ,sum);
}
return 0;
} */

//(7) given an integer n write a program which reads n input and prints them 
/*#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d" ,&n);
printf("print input:- %d\n",n);

for(int i=1;i<=n;i++){
int K;
scanf("%d", &K);
printf("output:- %d\n" ,K);
}
return 0;
} */

//(8) given an integer n write a program which reads n input and prints the sum of the given input integers 
/*#include<stdio.h>
int main(){
int n,sum;
printf("enter the number :");
scanf("%d" ,&n);
printf("print input :-%d\n" ,n);

for(int i=1;i<=n;i++){
int K;
scanf("%d",&K);
sum = sum + K;
printf("output :-%d\n" ,sum);
}
return 0;
} */

//(9) given an integer n write a program to print intersn from n to 1
/*#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d" ,&n);
for(int i=1;i<=n;n--){
printf("%d " ,n);
}
return 0;
}
*/
//(10) write a program to print a rectangle pattern of m rows and n columns using the :
/*#include<stdio.h>
int main(){
int m,n;
printf("enter the number:");
scanf("%d" ,&m);
printf("enter the number:");
scanf("%d" ,&n);

for(int i=1;i<=m;i++){
for(int j=1;j<=n;j++){
printf("+");
}
printf("\n");
}
return 0;
} */
//(11) write a program which reads n input and prints the product of the given input integers
/*#include<stdio.h>
int main(){
int n,mult=1;
printf("enter the number:");
scanf("%d" ,&n);
printf("print input:-%d\n" ,n);
for(int i=1;i<=n;i++){
int K;
scanf("%d" ,&K);
mult = mult * K;
printf("output :-%d \n" ,mult);
}
return 0;
} */
//(12) solid right angled triangle=2 given an integer number : 
/*#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
printf("*");
}
printf("\n");
}

for(int a=1;a<=n;a++){
for(int b=1;b<=a;b++){
printf("*");
}
printf("\n");
}
return 0;
} */

//(13) write a program to print the factorial of n 
/*#include<stdio.h>
int main(){
int n,mult=1;
printf("enter the number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
mult = mult * i;
printf("%d ",mult);
}
return 0;
} */
//(14) write a program to print the following using while loop puja na (I) first 10 even num numbers
/*#include<stdio.h>
int main(){
int n;
int sum = 0;
printf("entet the number :");
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
sum = sum +2;
printf("%d ",sum);
}
return 0;
} */
// (II) first 10 add numbers 
/*#include<stdio.h>
int main(){
int n;
int count;
printf("enter the number:");
scanf("%d",&n);
for(int i=1;i<=n;i=i+2){
count = count+1;
printf("%d ",count);
}
return 0;
} */

//(III) first 10 natural numbers 
/*#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
printf("%d " ,i);
}
return 0;
} */
//(IV) first 10 whole numbers :
/*#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d" ,&n);
for(int i=0;i<=n;i++){
printf("%d ",i);
}
return 0;
} */

//(15) write a program to print first 10 integers and their spuares like 
/*#include<stdio.h>
int main(){
int n,a;
printf("enter the number:");
scanf("%d" ,&n);

for(int i=1;i<=n;i++){
a = i*i;
printf("%d ",a);
}
return 0;
} */
 
 //(16) write while loop statement to print the following series 10,20,30,40,write a while loop statement to print following series
/*#include<stdio.h>
int main(){
int n,a;
printf("enter the number:");
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
a = i * 10;
printf("%d ",a);
}
return 0;
} */
 
 //(17) write a while loop statement to print the following series 105,98,91,....7
 /*#include<stdio.h>
 int main(){
 for(int i=105;i>=7;i=i-7){
 printf("%d ",i);
 }
 return 0;
 } */
 
 //(18) write a program to print the first 10 natural number in reverse :
/* #include<stdio.h>
 int main(){
 int n;
 printf("enter the number:");
 scanf("%d" ,&n);
 for (int i=1;i<=n;n--){
 printf("%d ",n);
 }
 return 0;
 } */
 //(19) write a program to print the sum of the first 10 natural numbers ;
 /*#include<stdio.h>
 int main(){
 int sum;
 for(int i=1;i<=10;i++){
 sum = sum +i;
 printf("%d \n",sum);
 }
 return 0;
 } */
 
//(20) write a program to print the sum of the first 10 natural numbers
/*#include<stdio.h>
int main(){
int n,sum;
printf("enter the number :");
scanf("%d" ,&n);
for (int i=1;i<=n;i++){
sum = sum + 1;
printf("%d ",sum);
}
return 0;
} */
//(21) write a program to print a table of a number entered from the user:
/*#include<stdio.h>
int main(){
int n,b;
printf("enter the number:");
scanf("%d",&n);
for(int a=1;a<=10;a++){
b = a * n;
printf("%d ",b);
}
return 0;
} */
 
 //(22) write a program to display all even numbers that fall between two numbers (exclusive both numbers)
/* #include<stdio.h>
 int main(){
 int m,n;
 printf("enter the number :");
 scanf("%d",&m);
 printf("enter the number :");
 scanf("%d",&n);
 if (m%2==0){
 m = m + 1;
 } else {
 m = m + 2;
 }
 printf("evennumbers between %d and %d (exclusive):\n",m,n);
 for(int i=m;i<n;i+=2){
 printf("%d ",i);
 
 }
 
 return 0;
 } */
 //(23) write a program to check whether a number is prime or not :
 /*#include<stdio.h>
 int main(){
 int n,i,c;
 printf("enter the number :");
 scanf("%d",&n);
 for (int i=1;i<=n;i++){
 if(n%i==0){
 c++;
 }
 }
 if(c==2){
 printf("prime no ");
 }
 else{
 printf("not prime no");
 }
 return 0;
 } */
 // (24) write a program to find the sum of the digit in a number without using slieing
/* #include<stdio.h>
 int main(){
 int n,sum=0;
 printf("enter the number :");
 scanf("%d",&n);
 while(n>0){
 sum+=n%10;
 n/=10;
 }
 printf("%d \n",sum);
 return 0;
 } */
 //(24) write a program to find the sum of the digits of a number accepted from the user :
 /*#incblude<stdio.h>
 int main(){
 int n,r,sum=0;
 printf("enter the number:");
 scanf("%d",&n);
 while (n>0){
 r = n % 10;
 sum = sum + r;
 n = n / 10;
 }
 printf("%d \n",sum);
 return 0;
 } */
 
 //(25) write a program to find the product of the digits of a number accepted  from the user :
 /*#include<stdio.h>
 int main(){
 int n,r,mult=1;
 printf("enter the number");
 scanf("%d" ,&n);
 while (n>0){
 r = n % 10;
 mult = mult * r;
 n = n / 10;
 }
 printf("%d \n",mult);
 return 0;
 } */
 //(26)write a program to reverse the number accepted by the user :
 /*#include<stdio.h>
 int main(){
 int n,b,r;
 printf("enter rhe number :");
 scanf("%d",&n);
 while (n>0){
 r = n % 10;
 n = n / 10;
 b = b * 10 + r;
 }
 printf("%d \n",b);
 return 0;
 } */
 
 //(28) write a program to print the fibonacci series till n terms (accept n from user);
 /*#include<stdio.h>
 int main(){
 int n,c;
 int a=0,b=1;
 printf("enter the number :");
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
 printf("%d \n",a);
 c = a + b;
 a = b;
 b = c;
 }
 return 0;
 } */
 //(29) write a program to print the factorial of a number accepted by the user : factorial number 5!= 5*4*3*2*1=120 
 /*#include<stdio.h>
 int main(){
 int n,mult=1;
 int p = n;
 printf("enter the number :");
 scanf("%d" ,&n);
 for(int i=1;n>=i;i++){
 mult = mult * n;
 printf("%d \n",mult);
 }
 return 0;
 } */
//(30) write a program to check whether a number is armstrong or not (armstrong number is a number that is equal to the sum of cubes of its digits for example 153 :
 /*#include<stdio.h>
 int main(){
 int n,s,a;
 printf("enter the number :");
 scanf("%d",&n);
 int m=n;
 while (n>0){
 a = n % 10;
 s = s + (a * a * a);
 n = n / 10;
 }
 if(m==s){
 printf("armstrong number");
 }
 else{
 printf("not number");
 }
 return 0;
 } */
 //(31) write a program to convert binary to decimal:
/* #include<stdio.h>
 int main(){
 int n,r;
 int a=0;
 printf("enter the number:");
 scanf("%d",&n);
 int i=1;
 while (n>0){
 r = n % 10;
 a = a + (r*i);
 n = n / 10;
 i = i * 2;
 }
 printf("%d",a);
 return 0;
 } */
 
 //(32) write a program to check whether a number is palindrome or not:
 /*#include<stdio.h>
 int main(){
 int n,s,r;
 printf("enter the number:");
 scanf("%d" ,&n);
 int p = n;
 while (n>0){
 r = n % 10;
 s = s * 10 +r;
 n = n/10;
 }
 if(p == n){
 printf("paindrome number ");
 }
 else{
 printf("not paindrom number ");
 }
 return 0;
 } */
 //(33) write a program to sum the sequence 1+1/1!+1/2!
/* #include<stdio.h>
 int main(){
 int n;
 printf("enter the number ");
 scanf("%d" ,&n);
 int sum = 1,fact = 1;
 for (int i=1;i<=n;i++){
 sum = sum +1/fact;
 printf("%d ",sum);
 }
 return 0;
 } */
 //(34) write a program to accept 10 num bers from the user and display its average :
/* #include<stdio.h>
 int main(){
 int n;
 int sum = 0;
 float average;
 printf("enter the number :");
 scanf("%d",&n);
 for(int c=1;c<=n;c++){
 sum = sum + c;
 average =(float) sum/n;
 printf("%f ",average);
 }
 return 0;
 } */
 //(35) write a program to accept 10 number from the user and display the largest & smallest numbers :
 
 
 //(36) write a program to display sum of add numbers and even numbers separately that fall between two 
/*#include<stdio.h>
int main(){
int n,m,so,se;
printf("enter the number :");
scanf("%d",&m);
printf("enter the number:");
scanf("%d",&n);
int sum = 0;
for(int i=m;i<=n;i++){
if (i%2==0){
se = se + i;
printf("%d ",se);
}
else{
so = so + i;
printf("%d ",so);
}
}
return 0;
} */

 
 
 
 












 
