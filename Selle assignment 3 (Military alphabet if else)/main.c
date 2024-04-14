    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        char letter;
        char military_code[27][10] = {
            "Alpha", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot",
        "Golf", "Hotel", "India", "Juliett", "Kilo", "Lima", "Mike",
        "November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra",
        "Tango", "Uniform", "Victor", "Whiskey", "X-ray", "Yankee",
        "Zulu"
            };

        printf("Input alphabet\n");
        scanf("%s", &letter);

               if (letter == 'A'){
           printf("%s\n", military_code[0]);

        } else if  (letter == 'B') {
            printf("%s\n", military_code[1]);
        } else if (letter == 'C') {
            printf("%s\n", military_code[2]);
        } else if (letter == 'D') {
            printf("%s\n", military_code[3]);
        } else if (letter == 'E') {
            printf("%s\n", military_code[4]);
        } else if (letter == 'F') {
            printf("%s\n", military_code[5]);
        } else if (letter == 'G') {
            printf("%s\n", military_code[6]);
        } else if (letter == 'H') {
            printf("%s\n", military_code[7]);
        } else if (letter == 'I') {
            printf("%s\n", military_code[8]);
        } else if (letter == 'J') {
            printf("%s\n", military_code[9]);
        } else if (letter == 'K') {
            printf("%s\n", military_code[10]);
        } else if (letter == 'L') {
            printf("%s\n", military_code[11]);
        } else if (letter == 'M') {
            printf("%s\n", military_code[12]);
        } else if (letter == 'N') {
            printf("%s\n", military_code[13]);
        } else if (letter == 'O') {
            printf("%s\n", military_code[14]);
        } else if (letter == 'P') {
            printf("%s\n", military_code[15]);
        } else if (letter == 'Q') {
            printf("%s\n", military_code[16]);
        } else if (letter == 'R') {
            printf("%s\n", military_code[17]);
        } else if (letter == 'S') {
            printf("%s\n", military_code[18]);
        } else if (letter == 'T') {
            printf("%s\n", military_code[19]);
        } else if (letter == 'U') {
            printf("%s\n", military_code[20]);
        } else if (letter == 'V') {
            printf("%s\n", military_code[21]);
        } else if (letter == 'W') {
            printf("%s\n", military_code[22]);
        } else if (letter == 'X') {
            printf("%s\n", military_code[23]);
        } else if (letter == 'Y') {
            printf("%s\n", military_code[24]);
        } else if (letter == 'Z') {
            printf("%s\n", military_code[25]);
        } else
        {
            printf("Not belong");
        }

        return 0;
    }
