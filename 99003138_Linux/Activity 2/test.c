#include<stdio.h>
#include "mystring.h"
#include "myutils.h"
#include "bitmask.h"
int main(){
char s1[100]="abc";
char s2[100]="xyz";

int lngth = mystrlen(s1);
printf("%d\n",lngth);
printf("%d\n",mystrcmp(s1,s2));
mystrcpy(s1,s2);
printf("%s\n",s1);
mystrcat(s1,s2);
printf("%s\n",s1);
int bit = 10;
printf("%d\n",setBit(bit,3));
printf("%d\n",resetBit(bit,3));
printf("%d\n",flip(3));
printf("%d\n",query(bit,3));
//int num = 5;
int a,b,c,d,x;
int count = 3;
/*printf("Enter a no to calculate factorial: ");
scanf("%d",&a);
printf("Enter a no to check whether the no is prime or not: ");
scanf("%d",&b); 
printf("Enter a no to check whether the no is palindrome or not: "); 
scanf("%d",&c); */
 
a=4;
b=5;
c=989;
d=factorial(a);
isprime(b);
ispalindrome(c);
printf("factorial is %d \n",d); 
x=sum(count, a,b,c);
printf("sum is %d \n",x);


return 0;
}
