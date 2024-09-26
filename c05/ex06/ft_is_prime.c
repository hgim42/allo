/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:55:16 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/18 09:55:16 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d\n", ft_is_prime(nb));
	return (0);
}