/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@example.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 23:44:53 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/14 23:45:48 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	change_to_char_print(int num, int n)
{
	char	buffer[10];
	int		pos;

	pos = 0;
	while (num > 0 || pos < n)
	{
		buffer[pos++] = '0' + (num % 10);
		num /= 10;
	}
	while (pos < n)
	{
		buffer[pos] = '0';
		pos++;
	}
	while (pos > 0)
	{
		pos--;
		write(1, &buffer[pos], 1);
	}
}

int	next_comb(int arr[], int n)
{
	int	i;
	int	j;

	i = n - 1;
	while (i >= 0)
	{
		if (arr[i] < 9 - (n - 1) + i)
		{
			arr[i]++;
			j = i + 1;
			while (j < n)
			{
				arr[j] = arr[j - 1] + 1;
				j++;
			}
			return (1);
		}
		i--;
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;
	int	first_comb;
	int	num;

	first_comb = 1;
	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	while (1)
	{
		if (!first_comb)
			write(1, ", ", 2);
		first_comb = 0;
		num = 0;
		i = 0;
		while (i < n)
			num = num * 10 + arr[i++];
		change_to_char_print(num, n);
		if (!next_comb(arr, n))
			break ;
	}
}

int	main(void)
{
	int	n;

	n = 2;
	if (n <= 0 || n >= 10)
		return (-1);
	ft_print_combn(n);
	return (0);
}
