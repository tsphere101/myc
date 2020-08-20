#include <stdio.h>
#include <ctype.h>

int main ()
{
    //natoWord Function
    int natoWord(num)
    {
        char word[50];
        char wordsArray[][50] = {"Alfa", "Bravo", "Charlie", "Delta", "Echo", "Foxtrot", "Golf", "Hotel", "India", "Juliett", "Kilo", "Lima", "Mike", "November", "Oscar", "Papa", "Quebec", "Romeo", "Sierra", "Tango", "Uniform", "Victor", "Whiskey", "X-Ray", "Yankee", "Zulu"};

        //SwitchCase
        switch (1)
            case 1 : {
        printf("Code Word is : %s\n", wordsArray[num]);
        break;
            }
    }

    //UserInput
    char charactInput;
    char word[50];
    printf("Insert the Character : ");
    scanf("%c", &charactInput);

    //Converter
    char charactInputUpperCase = toupper(charactInput);
    int characterNum = charactInputUpperCase-65;

    //Testing if is in range
    if (characterNum >=0 && characterNum <= 25)
    {
        natoWord(characterNum);
    }
    else {printf("The input can only be the character!\n");
    }

    system("Pause");
    return 0;
}
