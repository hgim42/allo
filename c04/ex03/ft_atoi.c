/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:42:53 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/18 00:42:53 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char c)
{
	if (c == ' ')
		return (1);
	else
		return (0);
}

int	is_digit(char num)
{
	if (num >= '0' && num <= '9')
		return (1);
	else
		return (0);
}

int ft_atoi(char *str)
{
	int result = 0;
    int sign = 1;

    while (is_space(*str))
		str++;
    while (*str == '+' || *str == '-')
	{
        if (*str == '-')
			sign = (-1) * sign;
        str++;
    }
    while (is_digit(*str))
	{
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
		printf("No argument!!\n");
	else
		printf("%d\n", ft_atoi(argv[1]));
	return (0);
}