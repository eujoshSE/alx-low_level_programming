#include <main.h>
#include <stdio.h>
#include <stdlib.h>

int find_len(const char *str);
char *create_xarray(int size);
const char *skip_leading_zeros(const char *str);
int get_digit(char c);
void multiply(char *result, const char *num1, int digit);
void add(char *result, const char *num);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return 98;
    }

    const char *num1 = skip_leading_zeros(argv[1]);
    const char *num2 = skip_leading_zeros(argv[2);

    if (*num1 == '\0' || *num2 == '\0')
    {
        printf("0\n");
        return 0;
    }

    int size = find_len(num1) + find_len(num2);
    char *final_prod = create_xarray(size + 1);
    char *temp_prod = create_xarray(size + 1);

    while (*num2)
    {
        int digit = get_digit(*num2--);
        multiply(temp_prod, num1, digit);
        add(final_prod, temp_prod);
    }

    int print_started = 0;
    for (int i = 0; final_prod[i]; i++)
    {
        if (final_prod[i] != '0')
            print_started = 1;
        if (print_started)
            putchar(final_prod[i]);
    }

    putchar('\n');

    free(temp_prod);
    free(final_prod);

    return 0;
}

int find_len(const char *str)
{
    int len = 0;
    while (*str++)
        len++;
    return len;
}

char *create_xarray(int size)
{
    char *array = (char *)malloc(sizeof(char) * size);
    if (array == NULL)
    {
        printf("Error\n");
        exit(98);
    }
    for (int index = 0; index < (size - 1); index++)
        array[index] = 'x';
    array[size - 1] = '\0';
    return array;
}

const char *skip_leading_zeros(const char *str)
{
    while (*str == '0' && *(str + 1) != '\0')
        str++;
    return str;
}

int get_digit(char c)
{
    if (c < '0' || c > '9')
    {
        printf("Error\n");
        exit(98);
    }
    return c - '0';
}

void multiply(char *result, const char *num1, int digit)
{
    int carry = 0;
    int result_index = find_len(result) - 1;

    while (result_index >= 0 && *num1)
    {
        if (*num1 < '0' || *num1 > '9')
        {
            printf("Error\n");
            exit(98);
        }

        int product = (*num1 - '0') * digit + carry;
        carry = product / 10;
        result[result_index] = (product % 10) + '0';

        result_index--;
        num1--;
    }
    if (result_index >= 0)
        result[result_index] = carry + '0';
}

void add(char *result, const char *num)
{
    int carry = 0;
    int result_index = find_len(result) - 1;

    while (result_index >= 0 && *num)
    {
        if (*num < '0' || *num > '9')
        {
            printf("Error\n");
            exit(98);
        }

        int sum = (*result - '0') + (*num - '0') + carry;
        carry = sum / 10;
        *result = (sum % 10) + '0';

        result_index--;
        num--;
    }
    while (result_index >= 0)
    {
        int sum = (*result - '0') + carry;
        carry = sum / 10;
        *result = (sum % 10) + '0';

        result_index--;
    }
}
