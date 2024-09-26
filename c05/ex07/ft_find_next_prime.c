/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgim42 <hgim42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:07:10 by hgim42            #+#    #+#             */
/*   Updated: 2024/09/18 10:07:10 by hgim42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	while (!is_prime(nb))
		nb++;
	return (nb);
}

int	main(void)
{
	int	nb;

	nb = 20;
	printf("%d\n", ft_find_next_prime(nb));
	return (0);
}