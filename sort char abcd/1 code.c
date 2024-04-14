#include <stdio.h>

void alphabet_order();

int main()
{
  char str[] = "facebook";
  alphabet_order(str);
  return 0;
}

void alphabet_order(char str[])
{
  int i, j;
  char temp;

  for (i = 0; str[i] != '\0'; i++)
  {
    for (j = i + 1; str[j] != '\0'; j++)
    {
      if (str[i] > str[j])
      {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
  puts(str);
}