/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 01:03:48 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/25 15:13:29 by hgim42           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while (*base)
	{
		len++;
		base++;
	}
	return (len);
}

int	is_valid_base(char *base)
{
	int len;
	int	i;
	int	j;

	len = ft_strlen(base);
	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-') 
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

void	convert_base(unsigned int nbr, char *base, int base_len)
{
	char	arr[50];
	int		idx;

	idx = 0;
	do
	{
		arr[idx++] = base[nbr % base_len];
		nbr /= base_len;
	} while (nbr > 0);
	while (idx > 0)
		write(1, &arr[--idx], 1);
}

void ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	unsigned int	unsigned_nbr;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return;
	if (nbr < 0)
	{
		unsigned_nbr = (unsigned int)(-nbr);
		unsigned_nbr = ~unsigned_nbr + 1;	
	}
	else
	{
		unsigned_nbr = (unsigned int)nbr;
	}
	convert_base(unsigned_nbr, base, base_len);
}

int	main(void)
{	
	ft_putnbr_base(2147483647, "0123456789ABCDEF");
    write(1, "\n", 1);
    ft_putnbr_base(-2147483648, "01");
    write(1, "\n", 1);
	ft_putnbr_base(-2147483647, "01");
    write(1, "\n", 1);
	 ft_putnbr_base(2147483648, "01");
    write(1, "\n", 1);
    ft_putnbr_base(255, "poneyvif"); 
    write(1, "\n", 1);
	
	return (0);
}