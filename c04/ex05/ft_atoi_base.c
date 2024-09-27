/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:26:09 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/25 22:29:28 by hgim42           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int len;
    
    len = 0;
    while (str[len])
        len++;
    return (len);
}

int is_valid_base(char *base)
{
    int len;
    int i;
    int j;

    len = ft_strlen(base);
    if (len < 2) 
        return (0);
    i = 0;
    while (i < len)
    {
        if (base[i] == '+' || base[i] == '-' || base[i] == ' ') 
            return (0);
        j = i + 1;
        while (j < len)
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int get_value(char c, char *base)
{
    int i;
    
    i = 0;
    while (base[i])
    {
        if (base[i] == c) 
            return (i);
        i++;
    }
    return (-1);
}

void    process_sign_space(char **str, int *sign)
{
     while (**str == ' ')
        (*str)++;
    while (**str == '+' || **str == '-')
    {
        if (**str == '-') 
            *sign = *sign * (-1);
        (*str)++;
    }
}

int ft_atoi_base(char *str, char *base)
{
    int base_len;
    int result;
    int sign;
    int value;

    base_len = ft_strlen(base);
    if (!is_valid_base(base))
        return 0;
    sign = 1;
    process_sign_space(&str, &sign);
    result = 0;
    while ((value = get_value(*str, base)) != -1)
    {
        result = result * base_len + value;
        str++;
    }
    return (result * sign);
}

int main() {
    // 다양한 테스트 케이스
    char *test_cases[][2] = {
        {"  -1A", "0123456789ABCDEF"}, // 16진수, -26
        {"1011", "01"},               // 2진수, 11
        {"  +FF", "0123456789ABCDEF"}, // 16진수, 255
        {"Z", "0123456789ABCDEF"},    // 잘못된 진법, 0
        {"  123", "0123456789"},      // 10진수, 123
        {" -100", "01234567"},        // 8진수, -64
        {"1001", "poneyvif"},         // 8진수, 512
        {"-11", "0123456789"},        // 10진수, -11
        {"invalid", "0123456789ABCDEF"}, // 잘못된 입력, 0
        {"-10", "01"},                // 2진수, -2
        {" + 100", "0123456789"}      // 잘못된 입력 (공백 포함), 0
    };

    for (size_t i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        char *str = test_cases[i][0];
        char *base = test_cases[i][1];
        int result = ft_atoi_base(str, base);
        printf("Input: \"%s\" with base \"%s\" => Result: %d\n", str, base, result);
    }

    return 0;
}
