#include <stdio.h>
#include <string.h>
int main() 
{
    char s1[50] = "R N S institute Of Technology";
  char s2[50] = " Bengaluru";
 
    printf("Length of string is %d \n",strlen(s1));
    strcat(s1, s2);
   printf("string after concatenation \n");
   puts(s1);
    
    for(int i=0;i<=strlen(s1);i++)
    {
      if(s1[i]>=97&&s1[i]<=122)
         s1[i]=s1[i]-32;
   }
   printf("\nUpper Case String is\n %s",s1);
  
    return 0;
}