//How to ทิ้ง... ทิ้งอย่างไรไม่ให้เหลือเธอ
#include <stdio.h>

int main()
{
    char input[100];
    fgets(input, 100, stdin);
    int i, k;
    for (i = 0; input[i] != '\0'; ++i)
    {
        //เมื่อเจอเธอ
        while (!((input[i] >= 97 && input[i] <= 122) || (input[i] >= 65 && input[i] <= 90) || input[i] >= 48 && input[i] <= 57 || input[i] == '\0'))
        {
            //ลบเธอออกจากหัวใจ
            for (k = i; input[k] != '\0'; ++k)
            {
                input[k] = input[k + 1];
            }
            input[k] = '\0';
        }
    }
    printf("%s", input);

    return 0;
}