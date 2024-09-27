/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_print_comb2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 22:40:04 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/10 20:15:05 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_change_char(int num)
{
	ft_putchar((num / 10) + '0');
	ft_putchar((num % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_change_char(num1);
			write(1, " ", 1);
			ft_change_char(num2);
			if (num1 == 98 && num2 == 99)
			{
				write(1, "\n", 1);
				break ;
			}
			write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
