/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:39:55 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/18 00:39:55 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_atoi(char *arr, long nb, long nb_len)
{
	arr[nb_len--] = '\0';
	while (nb_len >= 0)
	{
		arr[nb_len] = (nb % 10) + '0';
		nb = nb / 10;
		nb_len--;
	}
}

int	nb_length(long nb)
{
	int	nb_len;

	nb_len = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		nb_len++;
	}
	return (nb_len);
}

void	ft_putnbr(int nb)
{
	char	arr[20];
	long	nb_len;
	int		i;
	long	tmp;
	int		flag;

	flag = 1;
	tmp = nb;
	if (tmp < 0)
	{
		tmp = (-1) * tmp;
		flag = 0;
	}
	nb_len = nb_length(tmp);
	ft_atoi(arr, tmp, nb_len);
	if (flag == 0)
	{
		ft_putchar('-');
	}
	i = 0;
	while (arr[i] != '\0')
		ft_putchar(arr[i++]);
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}