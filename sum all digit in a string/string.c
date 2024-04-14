#include <stdio.h>

int main()
{
   char str[] = "f4c3b00k";
   int num[50];
   int len = strlen(str);
   int i, result = 0;

   for (i = 0; i < len; i++)
   {
      if (!(str[i] >= 97 && str[i] <= 122 || str[i] >= 65 && str[i] <= 90))
      {
         printf("%d ", str[i] - 48);
         num[i] = str[i] - 48;
      }
   }
   for (i = 0; i < len; i++)
   {
      result += num[i];
   }
   printf("\n%d", result);

   return 0;
}