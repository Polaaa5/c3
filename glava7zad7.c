#include <stdio.h> 

int i,j,k;

int main(void) { 
int P[150]; 
for(i=0; i<150;i++) 
 P[i] = i%2; 
P[2] = 1; 
for(k=3; k<=10; k+=2) { 
if (P[k]) 
for(j=3*k; j <150; j+=k*k)
 P[j] = 0; 
} 
for(i=2; i<150; i++) 
if (P[i]) 
printf("%d\n", i); 
return 0; 
}