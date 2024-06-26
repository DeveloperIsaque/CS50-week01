//até o momento fiz isso
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *number;

    do
    {
        number = get_string("Number: ");
    }
    while(strlen(number) < 13 || strlen(number) > 20);

    int length = strlen(number);
    int soma = 0;

    for(int i = 0; i < length; i++) {
        int digit = number[length - 1 - i] - '0';

        if (i % 2 == 1) {
            digit = digit * 2;
            if(digit > 9) {
                digit = (digit / 10) + (digit % 10);
            }
            soma = soma + digit;
        }
        soma = soma + digit;
    }

    printf("%i\n", soma);
}
