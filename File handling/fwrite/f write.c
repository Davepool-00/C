#include <stdio.h>

int main()
{
  FILE *data;
  data = fopen("text.txt", "w");

  fputs("Hello world", data);

  fclose(data);
  return 0;
}