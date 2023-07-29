//(1)write a program to add two matrix and store them in a separate matrix
/*#include<stdio.h>
int main(){
  int r,c;
  int sum=0;
  printf("enter the row no;");
  scanf("%d",&r);
  
  printf("enter the colums no:");
  scanf("%d",&c);
  int arr1[r][c];
  // input for the first matrix 
     for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         scanf("%d",&arr1[i][j]);
      }
    }
      printf("\n");
     // input for the secont matrix
    int arr2[r][c];
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         scanf("%d",&arr2[i][j]);
      }
    }
    printf("\n");
    // adding the two matrices
    int result[r][c]; 
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
      result[i][j]=arr1[i][j]+arr2[i][j];  
      }
    }
    // Display the resuit matrix 
      
        for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
            printf("%d ",result[i][j]);
          }
        printf("\n");
      }
 return 0;          
} */
//(2) writen a program to subtract two matrices and store them in a separate matrix:
/*#include<stdio.h>
int main(){
  int r,c;
  printf("enter the row no;");
  scanf("%d",&r);
  
  printf("enter the colums no:");
  scanf("%d",&c);
  int arr1[r][c];
  // input for the first matrix 
     for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         scanf("%d",&arr1[i][j]);
      }
    }
      printf("\n");
     // input for the secont matrix
    int arr2[r][c];
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         scanf("%d",&arr2[i][j]);
      }
    }
    printf("\n");
    // adding the two matrices
    int result[r][c]; 
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
      result[i][j]=arr1[i][j]-arr2[i][j];  
      }
    }
    // Display the resuit matrix 
      
        for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
            printf("%d ",result[i][j]);
          }
        printf("\n");
      }
 return 0;          
} */
//(3)write a program to multiply two matrices and store the result in a separate matrix.
/*#include<stdio.h>
int main(){
  int r,c;
  printf("enter the row no;");
  scanf("%d",&r);
  
  printf("enter the colums no:");
  scanf("%d",&c);
  int arr1[r][c];
  // input for the first matrix 
     for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         scanf("%d",&arr1[i][j]);
      }
    }
      printf("\n");
     // input for the secont matrix
    int arr2[r][c];
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
         scanf("%d",&arr2[i][j]);
      }
    }
    printf("\n");
    // adding the two matrices
    int result[r][c]; 
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
      result[i][j]=arr1[i][j]*arr2[i][j];  
      }
    }
    // Display the resuit matrix 
      
        for(int i=0;i<r;i++){
          for(int j=0;j<c;j++){
            printf("%d ",result[i][j]);
          }
        printf("\n");
      }
 return 0; 
} */
//(4) write a program to transpose matrix a store the result in a separate matrix
/*#include<stdio.h>
int main(){
 int r,c;
 printf("enter the row:");
 scanf("%d",&r);
 printf("enter the colum:");
 scanf("%d",&c);
 int arr[r][c];
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
    scanf("%d",&arr[i][j]);
   }
 }
  for(int i=0;i<c;i++){
     for(int j=0;j<r;j++){
     printf("%d ",arr[j][i]);
     }
     printf("\n");
  }
  return 0;
} */
//(5) write a program that prompts for a phone number of 10 digit and two dashes after the area code and the next three numbers.for example 017-555-1212 is a legal input 
/*#include<stdio.h>
int main(){
     int arr[12];
     for(int i=0;i<12;i++){
       scanf("%d",&arr[i]);
     }
      for(int i=0;i<12;i++){
       if(i==3||i==7){
           printf("- ");
         }
         else{
            printf("%d ",arr[i]);
         }
       }
 return 0;
 }  */   

//(6)write a program that rotates the elements of a list so that the elements at the first index moves to the second and elements at the second index move to the third and so on. the last elements moves at the first index .
/*#include<stdio.h>
int main(){
  int n;
  printf("enter the number:");
  scanf("%d",&n);
  int arr[n];
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    int rotation=2;
    for(int j=0;j<rotation;j++){
    int temp= arr[n-1];
     for(int i=n-1;i>=1;i--){
       arr[i]=arr[i-1];
       }
       arr[0]=temp;
     }
     // print the rotated list 
     printf("Rotated list :\n");
     for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
     }
return 0;

}  */

//(7)write a program to check whether a given matrix is an identity matrix or not .
/*#include<stdio.h>
int main(){
 int n,i,j;
 printf("enter the row number:");
 scanf("%d",&n);
 
 int matrix[n][n];
    
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        scanf("%d",&matrix[i][j]);
      }
    }
    int m=1;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
       if(i==j){
        if(matrix[i][j]==1){
       int m=1;
      } 
    } else {
  
    if (matrix[i][j]!=0){
      int m=0;
      }
    }
  }
 }
 
    if(m==1){
       printf("identity matrix\n");
    } else {
       printf("not an identity matrix\n");
    }
  
          
return 0;
} */
//(8) write  a program to find whether a given matrix is diagonal or not:          
/*#include<stdio.h>
int main(){
 int n,i,j;
 printf("enter the row number:");
 scanf("%d",&n);
 
 int matrix[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        scanf("%d",&matrix[i][j]);
      }
    }
    int diagonal=1;
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if(i!=j){
              if(matrix[i][j]!=0){
              diagonal=0;
              }
            } else {
             if(matrix[i][j]==0){
              diagonal=0;
            }
         }
      }
    }
    if(diagonal==1){
       printf("diagonal matrix\n");
    } else {
       printf("not diagonal matrix\n");
    }
     for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
         if(i==j){
            printf("%d ",matrix[i][j]);
         }
       }
     }
    printf("\n");
return 0;
} */
//(9) write a program to find the sum of all diagonal elements of a matrix 
/*#include<stdio.h>
int main(){
 int n,i,j;
 int sum;
 printf("enter the row number:");
 scanf("%d",&n);
 
 int matrix[n][n];
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        scanf("%d",&matrix[i][j]);
      }
    } 
  int diagonal=1; 
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i!=j){
       if(matrix[i][j]!=0){
         diagonal=0;
       }
      } else{
       if(matrix[i][j]==0){
        diagonal=0;
       }
    }
  }   
}
   if(diagonal==1){
       printf("diagonal matrix\n");
    } else {
       printf("not diagonal matrix\n");
    }
     for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
         if(i==j){
         sum=sum+matrix[i][j];
         }
       }
     }
     printf("%d\n",sum);
   
return 0;
} */
//(10) write a program to find  the minimum elements in the matrix :
/*#include<stdio.h>
int main(){
  int n;
  int min;
  printf("enter the elements :");
  scanf("%d",&n);
  int matrix[n][n];
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          scanf("%d",&matrix[i][j]);
    }
  } 
     min = matrix[0][0];
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
           if(matrix[i][j]<min){
             min= matrix[i][j];
           }
         }
      }
    printf("minimum elements matrix:%d\n",min);  
return 0;     
} */
//(11) write a program to find the position of an elments in a 2d array or matrix:
#include<stdio.h>
int main(){
  int n;
  printf("enter the elments :");
  scanf("%d ",&n);
  int matrix[n][n];
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        scanf("%d",matrix[i][j]);
     }
   }
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         
      }
   }
}









