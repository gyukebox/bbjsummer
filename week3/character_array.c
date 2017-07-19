#include <stdio.h>

int main(void)
{
    // char - 문자 하나
    // char[] - 문자 여러개

    // 문자 하나 - ' '
    // 문자 여러개 - " "
    char ch = 'a';
    char str[20];

    scanf("%s", str);

    printf("%c \n", ch);
    printf("%s \n", str);

    printf("%p \n", str);
    printf("%p \n", &str[0]);

    return 0;
}
