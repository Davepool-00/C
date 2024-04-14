#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main() {
    
    char str[] = "caraga state university";
    int i, j, len = 0;


    len = strlen(str);
    // Accepting input.

    for (i = 0; i < len; i++) {
        // Check vowels.
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {

            // delete vowel syntax
            for (j = 0; j < len; j++) {

                // Store after removing vowels
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }
        str[len + 1] = '\0';
    }

	for(i=0; str[i]!='\0'; i++)
	{
		//check first character is lowercase alphabet
		if(i==0)
		{
			if((str[i]>='a' && str[i]<='z'))
				str[i]=str[i]-32; //subtract 32 to make it capital
		}
		if(str[i]==' ')//check space
		{
			//if space is found, check next character
			++i;
			//check letter if lowercase
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32; //subtract 32 to make it capital
			}
		}
	}
   printf("%s", str);
   return 0;
}