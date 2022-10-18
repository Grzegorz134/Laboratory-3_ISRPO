#include <stdio.h>

int main(){
    int num;
    scanf_s("%d", &num);

    printf("Zadanie 2 - %X (HEX)\n", num);

    printf("Zadanie 3 - %o (OCT) | %o (OCT >> 3)\n",num, num >> 3);

    int notnum = ~num;
    printf("Zadanie 4 - %o (OCT) | %o (NOT OCT)\n",num,notnum);

    int num5;
    scanf_s("%o", &num5);

    int or = num | num5;
    printf("Zadanie 5 - %o (OCT)",or);

    return 0;
}
