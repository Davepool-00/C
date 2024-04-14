#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = "C4r4g4 St4t3 Un1V3rs1ty"; //! 44443131 output should be 44443311
    int size_text = strlen(text); //! size of the string text

    char number[100]; //! added value to use the counter below
    int size_number = strlen(number);

    int counter = 0; //! Start number for storing

    char new;

   

    for (int i = 0; i < size_text; i++)
    {
        if (text[i] >= 48 && text[i] <= 57)  //! Extracting using ASCII 0 - 9
        {
            number[counter] = text[i]; //! use counter as start number to store  == 0
            counter++; 
        }
    }

   printf("Extracted number: "); //! Test
  

    for (int i = 0; i < counter; i++)
    {
        printf("%c", number[i]);  //!Printing the Extracted number
    }
    
    

    //! new Loop for comparing
    for (int i = 0; i < counter; i++)
    {
        for (int j = i + 1; j < counter; j++)
        {
            if (number[i] > number[j]) //! Check if larger
            {
                new = number[i];
                number[i] = number[j];
                number[j] = new;
            }
        }
    }

    printf("\nSorted Number: ");
    for (int i = 0; i < counter; i++)
    {
        printf("%c", number[i]);
    }

    return 0;
}
