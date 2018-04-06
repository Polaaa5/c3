#include <stdio.h> 

int main(void) 
{ 
float a, b, resc=0.0, resn=0.0; 
int ch, nch, c;
c=1;

printf("enter the numbers\n"); 

while (c != 0) { 
scanf ("%i", &c); 
if (c == 0){ 
printf("even numbers: %i\n", ch); 
printf("mean value of even numbers: %f\n", resc / a); 
printf("odd numbers: %i\n", nch); 
printf("mean odd number: %f\n", resn / b); 
} 
else if(c % 2 == 0) { 
ch++; 
resc += c; 
a = ch; 
} 
else { 
nch++; 
b = nch; 
resn += c; 
} 
} 
return 0; 
}