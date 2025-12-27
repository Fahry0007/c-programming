#include<stdio.h>

int main ()
{
 char A [] = "MohamedFahry";
 char B [] ="mohamedFahry";
 char C [] = {'M','o','h','a','m','e','d','F','a','h','r','y','\0'};
 char D [] = {'M','o','h','a','m','e','d','F','a','h','r','y','\0'};   // null
 int i;
 for ( i = 0; i < sizeof(A); i++)
 {
     printf("A[%d]= '%c:: %d' stored at %p \n",i, A[i],A[i], & A[i]);
 }
for ( i = 0; i < sizeof(B); i++)
{
     printf("B[%d]= '%c::%d' stored at %p \n" ,i, B[i],B[i],& B[i]);
 }
for ( i = 0; i < sizeof(C); i++)
 {
     printf("C[%d]= '%c::%d' stored at %p \n",i, C[i],C[i], & C[i]);
 }
for ( i = 0; i < sizeof(D); i++)
 {
     printf("D[%d]= '%c::%d' stored at %p \n",i, D[i],D[i],& D[i]);
 }

  printf("A = %s \n " ,A);
  printf("B = %s \n " ,B);
  printf("C = %s \n " ,C);
  printf("D = %s \n " ,D);
}
