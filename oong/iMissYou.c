#include <stdio.h>

int main() {
    printf("Enter number : ");
    int num ;
    scanf("%d",&num);
    if (num <= 0 )              {printf("</3"); return 0;}
    for (int i = 0;i < num;i++) {printf("I Miss You\n");}
    return 0;
}