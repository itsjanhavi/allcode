/*#include<stdio.h>
int main(){
  for(int i=1;i<=5;i++){
  printf("hello janhavi\n");
  }
  return 0;

} */

/*#include<stdio.h>
int main(){
  int n;
  printf("enter the number: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i=i+2){
     printf("hello janhavi\n");
     }
     return 0;
  } */

// how for loop works : the various parameters
// first is initinlisation second is a condition third is a increment and decrement 

//print numbers from 1 to 100
/*#include<stdio.h>
int main(){
  for(int i=1;i<=100;i++){
  printf("%d \n",i);
  }
  return 0;
} */

// printf all the even numbers from 1 to 100
/*#include<stdio.h>
int main(){
   for(int i=1;i<=10;i++){
      if(i%2==0){
         printf("%d ",i);
      }
  }
  return 0;
} */

//print the table of 19
/*#include<stdio.h>
int main(){
   for ( int i=19;i<=190;i=i+19){
        printf("%d \n",i);
        }
         
      return 0;
} */

// print the table of n here n is a integer which user will input 
/*#include<stdio.h>
int main(){
   int n,m;
   printf("enter the numbers");
   scanf("%d" ,&n);
   for(int i=1;i=i*n;i++){
   
    printf("%d ",i);
   }
   return 0;
} */

// display this ap -1,3,5,7,9.. upto n;
/*#include<stdio.h>
int main(){
  int n;
  printf("enter the number :");
  scanf("%d" ,&n);
  for(int i=1;i<=2*n-1;i=i+2){
   printf("%d ",i);
  }
  return 0;

}*/

//display this AP -4,7,10,13,16... upto n terms.
/*#include<stdio.h>
int main(){
int n;//itni baar loop chalege 
printf("enter a number : "); 
scanf("%d",&n);
//4 7 10 13 16 19 ....upto n number of term 
// we are going to use extry variables 
int a = 4;
for (int i=1;i<=n;i++){
    printf("%d ",a);
    a = a + 3;
  }
  return 0;
} */

// display this gp 1,2,4,8,16,32.... upto n term.
/*#include<stdio.h>
int main(){
 int n;
 printf("enter the number");
 scanf("%d",&n);
 //1 2 4 8 16 32 ....
 int a = 1;
 for(int i=1;i<=n;i++){
     printf("%d ",a);
     a = a*2;
 }
 return 0;
} */

// display this gp -3,12,48,...upto n term.
/*#include<stdio.h>
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
int a = 3;
for(int i=1;i<=n;i++){
 printf("%d ",a);
 a = a*4;
}
return 0;

} */
// display this ap -100,97,94,...upto all terms are positive.
/*#include<stdio.h>
int main(){
int a = 100;
for(int i=1;a>0;i++){
printf("%d " ,a);
a = a-3;
}
return 0;
} */

//display this gp 100,50,25,... upto n terms 
/*#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
float a = 100;
for(int i=1;i<=n;i++){
printf("%f ",a);
a = a - (1/2);
}
return 0;
} */

//wap to check if a number is prime or not 
/*#include<stdio.h>
int main(){
int n;
printf("enter the number :");
scanf("%d" ,&n);
int a=0;
for(int i=2;i<=n-1;i++){
 if(n%i==0){// i is a factor of n
 a = 1;
 break; 
 }
} 
 if(n==1){
 printf("1 is neither prime nor composite");
 }
 else if(a==0){
 printf("the given number is prime\n");
 }
 else {
 printf("the given number is composite\n");
 }
 return 0;
 } */
 
// continue means skip karo us round ko
// wap to check if a number is a odd numbers
/*#include<stdio.h>
int main(){
for(int i=1; i<=100;i++){
if (i %2 ==0){
continue ;
}
printf("%d ",i);
}
return 0;
} */
// wap to print all the even numbers from 1 to 100:
/*#include<stdio.h>
int main(){
for(int i=1; i<=100;i++){
if(i%2!=0){
continue;
}
printf("%d ",i);
}
return 0;
} */
 
//* while loop * 
/*int i=0;
while (i<10){
//code
i++
} */
 // pattern //                              // * * * *
/* #include<stdio.h>                       //  * * *
 int main(){                              //   * *
 int n;                                  //    *
 printf("enter the number :");
 scanf("%d" ,&n);
 for(int i=1;i<=n;i++){
 for( int j=1;j<=n+1-i;j++){
 printf("*");
 }
 printf("\n");
 }
 return 0;
 } */
 //
 // print  the given pattern  ( alphabetsquare ) A = 65 AND a = 97
/* #include<stdio.h>
 int main(){                      // A B C D
 int n;                          //  A B C D
  printf("enter the number:");  //   A B C D 
 scanf("%d" ,&n);              //    A B C D 
 for(int i=1;i<=n;i++){
 int a = 1;
 for(int j=1;j<=n;j++){
 int d=a+64;
 char ch = (char)d;
 printf("%c ",ch);
 a++;
 }
 printf("\n");
 }
 return 0;
 }  */
                               // A
 //                           //  A B
/* #include<stdio.h>         //   A B C
 int main(){                //    A B C D
 int n,a;
 printf("enter the number:");
 scanf("%d" ,&n);
 for(int i=1;i<=n;i++){ 
 a = 1;
for( int j=1;j<=i;j++){
int d = a + 64;
char ch = (char)d;
printf("%c ",ch);
a++;
}
printf("\n");
}
 return 0;
} */
 
 // print the given pattern  number and alphabat triangle
/* #include<stdio.h>            // 1
 int main(){                   //  A B
 int n,a;                     //   1 2 3
 printf("enter the number:");//    A B C D 
 scanf("%d" ,&n);           //     1 2 3 4 5
 for(int i=1;i<=n;i++){
 a = 1 ;
 for(int j=1;j<=i;j++){
 int d = a + 64; 
 char ch = (char)d;
 if(i%2==0){
 printf("%c ",ch);
 a++;
 }
 else{
 printf("%d ",j);
 }
 }
 printf("\n");
 }
 return 0;
 }*/
  // print the given pattern (star plus)
/* #include<stdio.h>
 int main(){                      //     *
 int n;                          //      *
 printf("enter the number :");  //       *
 scanf("%d" ,&n);              //  * * * * * * *
 for(int i=1;i<=n;i++){       //         *
 for(int j=1;j<=n;j++){      //          *          
 int a = n/2+1;             //           *              
 if(j==a || i==a){
 printf("*");
 }
 else{
 printf(" ");
 }
 }
 printf("\n");
 }
 return 0;
 }  */
 
// print the given pattern           
/*#include<stdio.h>           // * * * * *
int main(){                  //  *       *
int n,m,a;                  //   *       *
printf("enter the rows :");//    * * * * *
scanf("%d",&n);
printf("enter the columns :");
scanf("%d" ,&m);
for(int i=1;i<=n;i++){
for(int j=1;j<=m;j++){
a++;
if(i==1||i==n||j==1|| j==m){
printf("*");
}
else{
printf(" ");
}
}
printf("\n");
}
return 0;
} */
// print the given pattern ( star cross) 
/*#include<stdio.h>        // *   *
int main(){               //   * *
int n;                   //     *
printf("enter the number:"); //* *
scanf("%d" ,&n);          // *    *
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
if(i==j || i+j==n+1){
printf("*");
}
else{
printf(" ");
}
}
printf("\n");
}
return 0;
} */                          // 1
                             //  2 3
// print the given pattern  //   4 5 6
/*#include<stdio.h>        //    7 8 9 10
int main(){
int n;
int a = 1;
printf("enter the number :");
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
printf("%d " ,a);
a = a + 1;
}
printf("\n");
}
return 0;
} */
 
/*#include<stdio.h>            // 1
int main(){                   //  0 1
int n,a;                     //   1 0 1
printf("enter the number:");//    0 1 0 1
scanf("%d",&n);
for(int i=1;i<=n;i++){
if(i%2!=0) a=1;
else a = 0;
for(int j=1;j<=i;j++){
printf("%d ",a);
if(a==0) a=1;
else a =0;
}
printf("\n");
}
return 0;
} */
 // startrianglemasts             //         *
/* #include<stdio.h>             //       *  *
 int main(){                    //     *  *  *
 int n;                        //    * *  *  *
 printf("enter the number :");
 scanf("%d" ,&n);
 for(int i=1;i<=n;i++){
 for(int j=1;j<=n-i;j++){
 printf(" ");
 }
 for(int k=1;k<=i;k++){
 printf("*");
 }
 printf("\n");
 }
 return 0;
 
 }  */                          //    * * * *
 /*#include<stdio.h>           //    * * * *
 int main(){                  //   * * * * 
 int n;                      //  * * * * 
 printf("enter the number :");
 scanf("%d" ,&n);
 for(int i=1;i<=n;i++){
 for(int j=1;j<=n-i;j++){
 printf(" ");
 }
 for(int k=1;k<=n;k++){
 printf("*");
 }
 printf("\n");
 }
 return 0;
 } */

/* #include<stdio.h>          //       A
 int main(){                 //      A B
 int n,a,d;                 //     A B C
 printf("enter the number:");//  A B C D
 scanf("%d" ,&n);
 for(int i=1;i<=n;i++){
 a = 1;
 for(int j=1;j<=n-i;j++){
 printf("  ");
 }
 for(int k=1;k<=i;k++){
  
 int d = a + 64;
 char ch = (char)d;
 printf("%c ", d);
 a= a+1;
 }
 printf("\n");
 }
 return 0;
 } */

/*#include<stdio.h>             //      *
int main(){                    //     * * *
int n;                        //    * * * * *
printf("enter the number :");//   * * * * * * *
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=n-i;j++){
printf("  ");
}
for(int k=1;k<=2*i-1;k++){
printf("* ");
}
printf("\n");
}
return 0;
}  */
                              //       1
/*#include<stdio.h>          //      1 2 1
int main(){                 //     1 2 3 2 1
int n;                     //    1 2 3 4 3 2 1 
printf("enter the number :");
scanf("%d" ,&n);
int nsp = n-1; 
for(int i=1;i<=n;i++){
 int a = i - 1;
for(int k=1;k<=nsp;k++){ // spaces ke liye ek loop
printf("  ");
}
nsp--;
for(int j=1;j<=i;j++){
printf("%d " ,j);
}
for(int b=1;b<=i-1;b++){
printf("%d ",a);
a--;
}
printf("\n");
}
return 0;
}  */
//c


                           
/*#include<stdio.h>            // 1
int main(){                   //  1 2 1
int n;                       //   1 2 3 2 1
printf("enter the number :");//   1 2 3 4 3 2 1
scanf("%d" ,&n);
int nsp = n-1; 
for(int i=1;i<=n;i++){
 int a = i - 1;
//for(int k=1;k<=nsp;k++){ // spaces ke liye ek loop
//printf("  ");
//}
//nsp--;
for(int j=1;j<=i;j++){
printf("%d " ,j);
}
for(int b=1;b<=i-1;b++){
printf("%d ",a);
a--;
}
printf("\n");
}
return 0;
} */

/*#include<stdio.h>          //      *
int main(){                 //     * * *
int n;                      //   * * * * *
printf("enter the number :");//    * * *  
scanf("%d" ,&n);              //     * 
int nsp = n/2;
int nst = 1;
int ml = n/2 + 1 ;
for(int i=1;i<=n;i++){
for(int j=1;j<=nsp;j++){
printf(" ");
}
for(int k=1;k<=nst;k++){
printf("*");
}
if(i<ml){
nsp--;
nst+=2;
}
else{
nsp++;
nst-=2;
}
printf("\n");
}
return 0;
} */

/*#include<stdio.h>          // * * * *
int main(){                 //    * * *
int n;                     //       * *
printf("enter the number:");//        *
scanf("%d" ,&n);
int nst = n;
int nsp = 0;
for(int i=1;i<=n;i++){
for(int j=1;j<=nsp;j++){
printf(" ");
}
for(int k=1;k<=nst;k++){
printf("*");
}
printf("\n");
nsp++;
nst--;
}
return 0;
} */

/*#include<stdio.h>          // *******
int main(){                 //  *** ***
int n;                     //   **   **
printf("enter the number:");//  *     *
scanf("%d" ,&n);
int nst=n;
int nsp =1;
for(int i=1;i<=2*n+1;i++){ // pehli line 
printf("*");
}
printf("\n");
for(int i=1;i<=n;i++){
for(int j=1;j<=nst;j++){// stars
printf("*");
}
for(int k=1;k<=nsp;k++){ // spaces
printf(" ");
}
//(construct a flowchaet to find a maximum bet threefor(int j=1;j<=nst;j++){ // stars
printf("*");
}
nst--;
nsp+=2;
printf("\n");
}
return 0;
} */

/*#include<stdio.h>
int main(){
int n,a;
printf("enter the number :");
scanf("%d" ,&n);
int nst=n;
int nsp=1;
for(int i=1;i<=2*n+1;i++){ // pehli line 
printf("%d",i);
}
printf("\n");
for(int i=1;i<=n;i++){
a=1;
for(int j=1;j<=nst;j++){
printf("%d" ,a);
a++;
}
for(int k=1;k<=nsp;k++){
printf(" ");
a++;
}
for(int j=1;j<=nst;j++){
printf("%d" ,a);
a++;
}
nst--;
nsp+=2;
printf("\n");
} 
return 0;
} */


























