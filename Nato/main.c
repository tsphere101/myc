#include <stdio.h>
#include <ctype.h>

int main ()
{
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
