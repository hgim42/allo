/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:13:14 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/16 20:13:14 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	change_hex(char c)
{
	char	tmp[2];

	if ((c / 16) < 10)
		tmp[0] = (c / 16) + '0';
	else
		tmp[0] = (c / 16) - 10 + 'a';
	if ((c % 16) < 10)
		tmp[1] = (c % 16) + '0';
	else
		tmp[1] = (c % 16) - 10 + 'a';
	write(1, tmp, 2);

}

void ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			change_hex(*str);
		}
		str++;
	}
}

int main(void)
{
	char	str[] = "Hello, world!\x01\x02\x03";
	ft_putstr_non_printable(str);
	return (0);
}