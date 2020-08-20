//Melody Generator
#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char noteArr[10];
    for (i = 0; i < 10; i++)
    {
        scanf("%c", &noteArr[i]);
        noteArr[i] = toupper(noteArr[i]);
    }

    printf("C D E F G\n");

    for (int k = 0; k < 10; k++)
    {
        switch (noteArr[k])
        {
        case 'C':
        {
            printf("O\n");
        }
        break;
        case 'D':
        {
            printf("  O\n");
        }
        break;
        case 'E':
        {
            printf("    O\n");
        }
        break;
        case 'F':
        {
            printf("      O\n");
        }
        break;
        case 'G':
        {
            printf("        O\n");
        }
        break;

        default:
            break;
        }
    }

    return 0;
}