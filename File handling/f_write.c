#include <stdio.h>

int main()
{
  FILE *data;
  data = fopen("text.txt", "w+");

  fputs("Hello friend", data);
  fseek(data, 0, SEEK_END); //? fseek cur adds the text (add 1 to have 1 space)
  fputs("world", data);    //* while set add where to start (starts from 0)
  fclose(data);             //! and end add and place the text at the end (add 1 for space)
  return 0;
}