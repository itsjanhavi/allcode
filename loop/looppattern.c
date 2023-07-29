//(1) construct a flowchart to orint multiplicution table from 1 t0 n :
/*#include<stdio.h>
int main(){
int n,a;
printf("enter the number:");
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
for (int j=1;j<=10;j++){
a = j * i;
printf("%d \n",a);
}
printf("\n");
}
return 0;
} */                 //1
//(2)                //1 2       
/*#include<stdio.h>  //1 2 3
int main(){          //1 2 3 4
int n;
printf("enter the number:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
printf("%d ",j);
}
printf("\n");
}
return 0;
} */ 
//(3)                    //1
/*#include<stdio.h>      //2 2 
int main(){              //3 3 3 
int n;                   //4 4 4 4 
printf("enter the number:");
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
printf("%d ",i);
}
printf("\n");
}
return 0;
} */                        //5 4 3 2 1
//(4)                       //5 4 3 2 
/*#include<stdio.h>         //5 4 3
int main(){                 //5 4
int n,m;                    //5
printf("Enter the number:");
scanf("%d",&n);
printf("enter the number:");
scanf("%d",&m);
for(int i=1;i<=n;i++){
for(int j=m;j>=i;j--){
printf("%d ",j);
}
printf("\n");
}
return 0;
}  */    
                                        //1 2 3 4 5
//(5)                                   //1 2 3 4 
/*#include<stdio.h>                     //1 2 3 
int main(){                             //1 2
int n,c;                                //1
printf("enter the number:");
scanf("%d" ,&n);
printf("enter the number:");
scanf("%d" ,&c);
for(int i=1;i<=n;i++){
c--;
for(int j=1;j<=c;j++){
printf("%d ",j);
}
printf("\n");
}
return 0;
} */
//(6)                            * * * * *
/*#include<stdio.h>              * * * *
int main(){                      * * *
int n,c;                         * *
printf("enter the number:");     *
scanf("%d",&n);
printf("enter the number:");
scanf("%d",&c);
for(int i=1;i<=n;i++){
c--;
for( int j=1;j<=c;j++){
printf("*");
}
printf("\n");
}
return 0;
} */
//(7) 
/*#include<stdio.h>                     5 5 5 5 5
int main(){                             5 5 5 5
int n,c;                                5 5 5
printf("enter the number:");            5 5 
scanf("%d",&n);                         5
printf("enter the number:");
scanf("%d",&c);
for (int i=1;i<=n;i++){
c--;
for(int j=1;j<=c;j++){
printf("5");
}
printf("\n");
}
return 0;
} */

/*(8)                                     5
#include<stdio.h>                         4 4
int main(){                               3 3 3
int n,c;                                  2 2 2 2 
printf("enter the number:");              1 1 1 1 1 
scanf("%d" ,&n);
printf("enter the number:");
scanf("%d" ,&c);
for(int i=1;i<=n;i++){
c--;
for(int j=1;j<=i;j++){
printf("%d ",c);
}
printf("\n");
}
return 0;
} */
//(9) 
/*#include<stdio.h>
int main(){
int n,c=0;
printf("enter the number:");
scanf("%d" ,&n);
//printf("enter the number:");
//scanf("%d" ,&c);
for(int i=1;i<=n;i++){
c++;
for(int j=1;j<=i;j++){
printf("%d ",c);
}
printf("\n");
}
return 0;
} */

/*(10) 
#include<stdio.h>                        1
int main(){                              2 3 4
int n,c;                                 5 6 7 8 9 
printf("enter the number:");             10 11 12 13 14 15 16
scanf("%d" ,&n);
for(int i=1;i<=n;i+=2){
for(int j=1;j<=i;j++){
c++;
printf("%d ",c);
}
printf("\n");
}
return 0;
} */
                                          //  1
/*(11)                                   //   2 1
#include<stdio.h>                        //   3 2 1 
int main(){                                // 4 3 2 1
int n,c;                                  //  5 4 3 2 1
printf("enter the number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
c+=i;
for(int j=1;j<=i;j++){
printf("%d ",c);
c--;
}
printf("\n");
}
return 0;
} */

//(12)                             // 1
/*#include<stdio.h>                // 4 4
int main(){                        // 9 9 9
int n,k,c=0;                      //  16 16 16 16 
printf("enter the number:");
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
c++;
for(int j=1;j<=i;j++){
k = c * c;
printf("%d ",k);
}
printf("\n");
}
return 0;
} */
//(13)                                    // 1
/*#include<stdio.h>                      //  3 3
int main(){                             //   5 5 5
int n,c=1;                             //    7 7 7 7
printf("enter the number ");          //     9 9 9 9 9 
scanf("%d",&n);
for(int i=1;i<=n;i++){
c+=2;
for(int j=1;j<=i;j++){
printf("%d ",c);
}
printf("\n");
}
return 0;
}*/

//(14)                                 //0
/*#include<stdio.h>                   // 0 1
int main(){                          //  0 1 2
int n;                              //   0 1 2 3
printf("enter the number :");      //    0 1 2 3 4 
scanf("%d",&n);
for(int i=0;i<=n;i++){
for(int j=0;j<=i;j++){
printf("%d ",j);
}
printf("\n");
}
return 0;
} */

//(15) 
/*#include<stdio.h>
int main(){
int n,c;
printf("enter the number :");
scanf("%d",&n);
printf("enter the number:");
scanf("%d",&c);
for(int i=1;i<=n;i++){
for(int j=1;j<=c;j++){
printf("*");
}
printf("\n");
}
return 0;
} */

//(16)                             //         *
/*#include<stdio.h>               //        * *
int main(){                      //       * * *
int n;                          //      * * * *
printf("enter the number:");
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
if(i+j<=n){
printf(" ");
}
else{
printf("*");
}
}
printf("\n");
}

return 0;
} */
                                     //        1
/*(17)                              //       2 1
#include<stdio.h>                  //      3 2 1
int main(){                       //     4 3 2 1
int n;
int c=0;
printf("enter the number :");
\
scanf("%d",&n);
for(int i=1;i<=n;i++){
c=c+i;
for(int j=1;j<=n;j++){
if(i+j<=n){
printf(" ");
}
else{
printf("%d" ,c);
c--;
}
}
printf("\n");
}
return 0;
} */

/*(18)                             //       1
#include<stdio.h>                 //      2 2
int main(){                      //     3 3 3
int n;                          //    4 4 4 4
printf("enter the number :");
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
if(i+j<=n){
printf("  ");
}
else{
printf("%d " ,i);
}
}
printf("\n");
}
return 0;
}  */
/*19)                          
#include<stdio.h>                    //      0  
int main(){                         //     1 0  
int n,c=0;                         //    2 1 0
printf("enter the number :");     //   3 2 1 0
scanf("%d" ,&n);
for(int i=0;i<=n;i++){
c=c+i;
for(int j=0;j<=n;j++){
if(i+j<=n){
printf(" ");
}
else{
printf("%d",c);
c--;
}
}
printf("\n");
}
return 0;
}  */                           
 //(20)                        //  * * * *
/* #include<stdio.h>          //   * * *
 int main(){                 //    * *
 int n;                     //     *
 printf("enter the number:");
 scanf("%d" ,&n);
 for(int i=1;i<=n;i++){
 for(int j=1;j<=n-1-i;j++){
 printf("*");
 }
 printf("\n");
 }
 return 0;
 } */
 
//(21)                           // * * * *
/*#include<stdio.h>             //    * * *
int main(){                    //       * *
int n,c;                      //          *
printf("enter the number :");
scanf("%d",&n);
printf("enter the number :");
scanf("%d" ,&c);
for(int i=1;i<=n;i++){
c--;
for(int j=1;j<=n;j++){
if(c+j<=n){
printf(" ");
}
else{
printf("*");
}
}
printf("\n");
}
return 0;
} */
 
 //(22) 
 /*#include<stdio.h>         // 1 1 1 1 
 int main(){                //  2 2 2
 int n,c;                  //   3 3
 printf("enter the number:");// 4
 scanf("%d" ,&n);
 printf("enter the number :");
 scanf("%d" ,&c);
 for(int i=1;i<=n;i++){
 c--;
 for(int j=1;j<=n;j++){
 if(c+j<=n){
 printf(" ");
 }
 else{
 printf("%d" ,i);
 }
 }
 printf("\n");
 }
 
 return 0;
 } */
 //(23)                        // 5 4 3 2 1
 /*#include<stdio.h>          //    4 3 2 1  
 int main(){                 //       3 2 1
 int n,c;                   //          2 1
 printf("enter the number:");//           1
 scanf("%d" ,&n);
 for(int i=n;i>=1;i--){
 c=c+i;
 for(int j=1;j<=n;j++){
 if(c+j<=n){
 printf(" ");
 }
 else{
 printf("%d" ,c);
 c--;
 }
 }
 printf("\n");
 }
  return 0;
 } */
                               // 5 4 3 2 1
 //(24)                       //    9 8 7 6
 /*#include<stdio.h>       //         12 11 10
 int main(){                   //        14 13
 int n,c,m,s;                 ///           15
 printf("enter the number:");
 scanf("%d" ,&n);
 printf("enter the number:");
 scanf("%d" ,&c);
 printf("enter the number :");
 scanf("%d" ,&s);
 printf("enter the number:");
 scanf("%d" ,&m);
 for(int i=1;i<=n;i++){
 c--;
 s=s+c;
 m=0;
 m=m+s;
 for(int j=1;j<=n;j++){
 if(c+j<=n){
 printf(" ");
 }
 else{
 printf("%d",m);
 m--;
 }
 }
 printf("\n");
 }
 return 0;
 }  */
 
 //(25)                        // 1
 /*#include<stdio.h>          //  2 4
 int main(){                 //   3 6 9
 int n,a;                    //   4 8 12 16
 printf("enter the number :");//  5 10 15 20 25
 scanf("%d" ,&n);
 for(int i=1;i<=n;i++){
 for(int j=1;j<=i;j++){
 a = i * j;
 printf("%d" ,a);
 }
 printf("\n");
 }
 return 0;
 } */
//(26) 
/*#include<stdio.h>           // 1 * 2 * 3 * 4
int main(){                  //  1 * 2 * 3 
int n,c;                    //   1 * 2 
printf("enter the number :");//  1
scanf("%d" ,&n);
printf("enter the number :");
scanf("%d" ,&c);
for(int i=1;i<n;i++){
c--;
for(int j=1;j<=c;j++){
printf("%d" ,j);
if(i+j<n){
printf("*");
}
}
printf("\n");
}
return 0;
} */
//(27) 
/*#include<stdio.h>
int main(){
int n,c;
printf("enter the number :");
scanf("%d" ,&n);
for(int i=1;i<=n;i++){
c=c+5;
for(int j=1;j<n;j++){
if(i%2==0){
c++;
printf("%d" ,c);
}
else{
printf("%d" ,c);
c--;
}
}
printf("\n");
}
return 0;
} */

 //(28) 
 /*#include<stdio.h>
 int main(){
 int n;
 printf("enter the number :");
 scanf("%d",&n);
 for(int i=0;n>=1;i--){
 for(int j=1;j<=i;j++){
 printf("%d" ,j);
 }
 printf("\n");
 }
 return 0;
 } */
//(29) 
/*#include<stdio.h>
int main(){
int n,c;
printf("enter the number :");
scanf("%d" ,&n);
i=n;
for(int i>=1;i--){
c = c+i;
for(int j=1;j<=i;j++){
printf("%d" ,c);
c++;
}
printf("\n");
}
return 0;
} */

//(30)                          //       *
/*#include<stdio.h>              //       * *
int main(){                   //      *  *  *
int n;                       //     *  *  *  *
printf("enter the number:");//    *  *  *  *  *
scanf("%d" ,&n);
for(int i=i;i<=n;i++){
for(int j=1;j<=n;j++){
if(i+j<=n){
printf(" ");
}
else{
printf("* ");
}
}
printf("\n");
}
return 0;
} */
 
//(31)                         // * * * * *
/*#include<stdio.h>           //   * * * *
int main(){                   //    * * *
int n;                       //      * *
printf("enter the number:");//        *
scanf("%d" ,&n);
for(int i=n;i>=1;i--){
for(int j=1;j<=n;j++){
if(i+j<=n){
printf(" ");
}
else{
printf("* ");
}
}
printf("\n");
}
return 0;
} */ 
 
 //(32)                           // *
/* #include<stdio.h>             //  * *
 int main(){                    //   * * *
 int n;                        //    * * * *
 printf("enter the number :");//     * * *
 scanf("%d" ,&n);            //      * * 
 for(int i=1;i<=n;i++){      //      *
 for(int j=1;j<=i;j++){
 printf("* ");
 }
 printf("\n");
 }
 
 for(int i=n-1;i>=1;i--){
 for(int j=1;j<=i;j++){
 printf("* ");
 }
 printf("\n");
 }
 return 0;
 } */
//(33) 
/*#include<stdio.h>
int main(){                       //       *
int n;                           //      * *
printf("enter the number:");     //    * * *
scanf("%d" ,&n);                //   * * * *
for(int i=1;i<=n;i++){         //      * * *
for(int j=1;j<=n;j++){         //        * *
if(j+i<=n){                    //          *
printf(" ");
}
else{
printf("*");
}
}
printf("\n");
}
for(int i=n-1;i>=1;i--){
for(int j=1;j<=n;j++){
if(j+i<=n){
printf(" ");
}
else{
printf("*");
}
}
printf("\n");
}
return 0;
}  */
  
 //(34)                           // *
 /*#include<stdio.h>             //  * *
 int main(){                    //   * * *
 int n;                        //    * * * *
 printf("enter the number :");//     * * * *
 scanf("%d" ,&n);            //      * * *
 for(int i=1;i<=n;i++){      //      * *
 for(int j=1;j<=i;j++){     //       *
 printf("* ");
 }
 printf("\n");
 }
 
 for(int i=n;i>=1;i--){
 for(int j=1;j<=i;j++){
 printf("* ");
 }
 printf("\n");
 }
 return 0;  
 }  */
  
 //(35)  
/*#include<stdio.h>
int main(){                      
int n;                           //         * * * * *
printf("enter the number:");     //          * * * *
scanf("%d" ,&n);                //            * * *
for(int i=n;i>=1;i--){         //              * *
for(int j=1;j<=n;j++){         //               *
if(j+i<=n){                    //               *
printf(" ");                   //              * *
}                              //            *  *  *
else{                          //          *  *  *  *
printf("* ");                    //       *  *   *  *  *
}
}
printf("\n");
}
for(int i=2;i<=n;i++){
for(int j=1;j<=n;j++){
if(j+i<=n){
printf(" ");
}
else{
printf("* ");
}
}
printf("\n");
}
return 0;
}  */
 //(36)  
/*#include<stdio.h>
int main(){                       //      *
int n;                           //      * *
printf("enter the number:");     //     * * *   
scanf("%d" ,&n);                //     * * * *
for(int i=1;i<=n;i++){         //       * * *
for(int j=1;j<=n;j++){         //        * *
if(j+i<=n){                    //         *
printf(" ");
}
else{
printf("* ");
}
}
printf("\n");
}
for(int i=n-1;i>=1;i--){
for(int j=1;j<=n;j++){
if(j+i<=n){
printf(" ");
}
else{
printf("* ");
}
}
printf("\n");
}
return 0;
} */
  
//(37) 
/* #include<stdio.h>             //  * * * * * 
 int main(){                    //   * * * *
 int n;                        //    * * * 
 printf("enter the number :");//     * * 
 scanf("%d" ,&n);            //      * 
 for(int i=n;i>=1;i--){      //      * *
 for(int j=1;j<=i;j++){     //       * * *
 printf("* ");               //       * * * *
 }                         //        * * * * *
 printf("\n");
 }
 
 for(int i=1;i<=n;i++){
 for(int j=1;j<=i;j++){
 printf("* ");
 }
 printf("\n");
 }
 return 0;  
 }  */
  
 //(38) 
/*#include<stdio.h>
int main(){                       //      1
int n;                           //      1 2
int c=1;                           //   1 2 3
printf("enter the number:");     //    1 2 3 4  
scanf("%d" ,&n);                //    1 2 3 4 5
for(int i=1;i<=n;i++){
c=1;                           //      1 2 3 4
for(int j=1;j<=n;j++){         //       1 2 3
if(j+i<=n){                    //        1 2
printf(" ");                    //        1
}
else{
printf("%d " , c);
c++;
}
}
printf("\n");
}
for(int i=n-1;i>=1;i--){
c=1;
for(int j=1;j<=n;j++){
if(j+i<=n){
printf(" ");
}
else{
printf("%d " ,c);
c++;
}
}
printf("\n");
}
return 0;
} */
  
 //(39)
 
 /*#include<stdio.h>             // *          *
 int main(){                    //  * *      * *
 int n;                        //   * * *  * * *
 printf("enter the number:"); //    * * ** * * * 
 scanf("%d" ,&n);             //    * * *  * * *
 for(int i=1;i<=n;i++){       //    * *      * *  
 for(int j=1;j<=i;j++){      //     *          *
 printf("* ");
 }
 for(int a=1;a<=2*(n-i);a++){
     printf("  ");
     }
 for(int t=1;t<=i;t++){
 printf("* ");
 }
 printf("\n");
}
for(int i=n; i>0; i--){
for(int j=1; j<=i; j++){
    printf("* ");
    }
    for(int a=1;a<=2*(n-i);a++){
     printf("  ");
     }
 for(int t=1;t<=i;t++){
 printf("* ");
 }
 printf("\n");
 }
 return 0;
}*/
//(40)
 // * * * * 0 * * * *
 // * * * 0 0 0 * * *
 // * * 0 0 0 0 0 * *
 // * 0 0 0 0 0 0 0 * 
 
/* #include<stdio.h>
 int main(){
 int n;
 printf("enter the number :");
 scanf("%d" ,&n);
 for(int i=1;i<=n;i++){
 for(int j=1;j<=n;j++){
 if(j+i<=n+1){
 printf("* ");
 }
 else{
 printf("0 ");
 }
 }
 for(int j=n-1;j>=1;j--){
 if(j+i<=n+1){
 printf("* ");
 }
 else{
 printf("0 ");
 }
 }
 printf("\n");
 }
 return 0;
 } */
 // * * * * *
 // *       *
 // *       *
//  *       * 
 // * * * * *
 // *       *
 // *       *
 // *       *
 // * * * * *
 
 /*#include<stdio.h>
 int main(){
 int n;
 printf("enter the numbber :");
 scanf("%d" ,&n);
 for(int i=1;i<=n;i++){
 printf("* ");
 }
 for(int i=1;i<=n;i++){
 for(int j=1;j<=1;j++){
 printf("* ");
 }
 for(int a=1;a<=n-1;a++){
 printf("  ");
 }
 for(int j=1;j<=1;j++){
 printf("* ");
 }
 
 printf("\n");
 }
 for(int i=1;i<=n;i++){
 printf("* ");
 }
 for(int i=1;i<=n;i++){
 for(int j=1;j<=1;j++){
 printf("* ");
 }
 for(int a=1;a<=n-1;a++){
 printf("  ");
 }
 for(int j=1;j<=1;j++){
 printf("* ");
 }
 for(int k=1;k<=n;k++){
 printf("* ");
 }
 
 
 printf("\n");
 }
 return 0;
 } */
 
 #include<stdio.h>
 int main(){
 int n;
 printf("enter the number:");
 scanf("%d" ,&n);
 for(int i=1;i<=n;i++){
 printf("*");
 }
 for(int i=1;i<=n;i++){
 for(int j=1;j<=1;j++){
 printf("* ");
 }
 for(int j=1;j<=n-1;j++){
 printf(" ");
 }
 for(int j=1;j<=1;j++){
 printf("*");
 }
 printf("\n");
 }
 return 0;
 }
 
 
 
 
 
 
 
 
 
       
