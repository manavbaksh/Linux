#include <stdio.h>
#include "../include/mystring.h"


int mystrlen(char s[]) {
   int len = 0;
   while (s[len] != '\0')
      len++;
   printf("Length of String is : %d\n", len);
   return 0;
 }

int mystrcpy(char s1[],char s2[]) {
    char i;
   
    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("Copied String is: %s\n", s2);
    return 0;
}

int mystrcat(char s1[], char s2[]) {


  int length, j;

  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}


int mystrcmp(char s1[], char s2[])
{
  int flag=0,i=0;  
    while(s1[i]!='\0' &&s2[i]!='\0')  
    {  
       if(s1[i]!=s2[i])  
       {  
           flag=1;  
           break;  
       }  
       i++;  
    }  
    if(flag==0)  
    	return 0;  
    else  
    	return 1;  
}
