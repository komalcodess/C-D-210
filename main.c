#include <stdio.h>
int main(){
int n;
double sum=0.0;
int sign=1;
printf("Enter the terms: ");
scanf("%d",&n);

for(int i=1; i<=2*n; i+=2){
sum+=sign*1.0 /i;
sign=-sign;
}
 printf("Sum of the series up to %d terms is: %lf\n", n, sum);

}
