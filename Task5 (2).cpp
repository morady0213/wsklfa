#include <stdio.h>
#include <string.h>
int main()
{
   char s[100];

   printf("Enter a string \n");
   gets(s);

   strrev(s);

   printf("Reverse of entered string is: %s\n", s);

   return 0;
}
